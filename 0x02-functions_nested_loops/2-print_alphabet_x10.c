#include "main.h"
/**
 * print_alphabet - print alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int a;
int i;
while (a <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
a++;
putchar('\n');
}
}
