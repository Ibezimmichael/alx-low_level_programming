#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main- prints last digit
 *
 *Return: Always return zero
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = n % 10;
if (n1 > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if (n1 == 0)
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
else if (n1 < 6 && n1 != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
return (0);
}
