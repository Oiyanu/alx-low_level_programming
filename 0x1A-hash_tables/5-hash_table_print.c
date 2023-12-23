#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int y;
	unsigned char com_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (y = 0; y < ht->size; y++)
	{
		if (ht->array[y] != NULL)
		{
			if (com_flag == 1)
				printf(", ");

			node = ht->array[y];
			while (node != NULL)
			{
				printf("'%': '%s'", node->key, node->value);

				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			com_flag = 1;
		}
	}
	printf("}\n");
}
