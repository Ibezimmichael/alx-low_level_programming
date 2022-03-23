#include "main.h"
/**
 *_strcat - concatenate two dtrings
 *@dest: the variable the string will be added unto
 *@src: contains new string to be added
 *Return: always 0
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; ++i)
{
}
for (j = 0; src[j] != '\0'; ++j)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
