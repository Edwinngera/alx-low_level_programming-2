#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: number of arguments to the program
 * @av: array of pointers to string that ara the arguments to main
 *
 * Return: pointer to the resulting string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int index, index2, len;
char *s, *begin;

if (ac == 0)
return (0);
if (av == 0)
return (0);
len = 0;
index = 0;
while (index < ac)
{
index2 = 0;
while (*(*(av + index) + index2))
{
len++;
index2++;
}
index++;
}
s = malloc(sizeof(char) * (len + ac + 1));
if (s == 0)
return (0);
begin = s;
for (index = 0; index < ac; index++)
{
index2 = 0;
while (*(*(av + index) + index2))
{
*(s++) = *(*(av + index) + index2);
index2++;
}
*(s++) = '\n';
}
*(s) = '\0';
return (begin);
}
