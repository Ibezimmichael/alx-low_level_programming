#include "main.h"
/**
 *_puts - prints a string followed by a new line
 *@str:conatains the value
 *
 *Return: always 0
 */
void _puts(char *str)
{
char m;
int i;

m = str;

for (i = 0; m[i]; i++)
{
_putchar (m[i]);
}
_putchar('\n');
}
