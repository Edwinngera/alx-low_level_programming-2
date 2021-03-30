#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * copy_file - copies file contents to new file.
 * @file_from: file to copy from.
 * @file_to: file to copy to.
 * @f1: filename string.
 * @f2: filename string.
 * Return: void
 */

void copy_file(int file_from, int file_to, const char *f1, const char *f2)
{
ssize_t fd_from;
char buffer[1204];

while ((fd_from = read(file_from, buffer, 1204)) != 0)
{
if (fd_from == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n",
f1);
exit(98);
}
if (write(file_to, buffer, fd_from) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n",
f2);
exit(99);
}
}
}


/**
 * cp - opens and closes files to be copied.
 * @file1: filename string.
 * @file2: filename string.
 * Return: int, 0 on success.
 */

int cp(const char *file1, const char *file2)
{
int file_from, file_to;
mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

file_from = open(file1, O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
file1);
exit(98);
}

file_to = open(file2, O_CREAT | O_TRUNC | O_WRONLY, permissions);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
exit(99);
}

copy_file(file_from, file_to, file1, file2);
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error, Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}


/**
 * main - copies content from one file to another.
 * @ac: argument counter.
 * @av: argument vector.
 * Return: int, 0 on success.
 */

int main(int ac, char **av)
{
int result;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
exit(97);
}

result = cp(av[1], av[2]);
return (result);
}
