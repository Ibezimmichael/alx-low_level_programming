#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: destination for the string
 *@src: source to be copied
 *@n: value to be reduced
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; src[j] != '\0' && n > 0; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
