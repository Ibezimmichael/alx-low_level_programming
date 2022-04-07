#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b: size of int
 *Return: p
 *if malloc fails, value is equal to 98
 *
 *
 */
void *malloc_checked(unsigned int b)
{
char *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
