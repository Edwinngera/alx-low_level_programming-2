#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 * @filename: file to be read.
 * @letters: bytes to read and print.
 * Return: ssize_t, bytes read.
 *          0, if error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
n = read(fd, buffer, letters);
if (n == -1)
{
close(fd);
free(buffer);
return (0);
}
write(STDOUT_FILENO, buffer, n);
free(buffer);
close(fd);
return (n);

}
