#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - A function tht creates a harsh table.
 * @size: The arguments that decides the size of a harsh table.
 * @key: The arguments that decides the size of a harsh table.
 * Return: a pointer to the newly created harsh table (table).
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = 0;

hash = hash_djb2(key) % size;

return (hash);
}
