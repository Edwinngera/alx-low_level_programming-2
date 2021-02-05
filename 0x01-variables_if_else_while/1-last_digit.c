#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int s = n % 10;
if (s > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, s);
}
else if (s == 0)
{
printf("Last digit of %i is %i and is 0\n", n, s);
}
else if (s < 6)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, s);
}
return (0);
}
