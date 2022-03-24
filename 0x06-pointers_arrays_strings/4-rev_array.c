#include "main.h"
/**
 * reverse_array - reverses the array
 *@a: an array of integers
 *@n: number of elements to swap
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n; i >= 0; i++)
{
printf("%d", a[i]);
}
printf("\n");
}
