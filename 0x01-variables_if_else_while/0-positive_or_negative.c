#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - finding out if number is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is a positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is a negative\n", n);
}
return (0);
}
