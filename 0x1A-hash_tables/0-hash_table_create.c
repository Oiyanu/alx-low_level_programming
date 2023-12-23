#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table
 * @size: size of array
 * Return: NULL if error occurs, else a pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *k;
	unsigned long int z;

	k = malloc(sizeof(hash_table_t));
	if (k == NULL)
		return (NULL);

	k->size = size;
	k->array = malloc(sizeof(hash_node_t *) * size);
	if (k->array == NULL)
		return (NULL);
	for (z = 0; z < size; z++)
		k->array[z] = NULL;

	return (k);
}
