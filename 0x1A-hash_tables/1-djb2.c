#include "hash_tables.h"

/**
 * hash_djb2 - function writes hash function implementing the djb2 algorithm
 * @str: string to hash
 * Return: calc hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int i;
	int y;

	i = 5381;
	while ((y = *str++))
		i = ((i << 5) + i) + y;

	return (i);
}

