#include "main.h"

/**
 * main- prints _putchar
 *
 * Return: c (Success)
 */
int main(void)
{
char text[8] = "_putchar"
int i;
for (i = 0; i < 9; i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
