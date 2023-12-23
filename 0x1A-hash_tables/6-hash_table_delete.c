#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tem;
	unsigned long int y;

	for (y = o; y < ht->size; Y++)
	{
		if (ht->array[y] != NULL)
		{
		node = ht->array[y];
		while (node != NULL)
		{
			tem = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tem;
		}
	}
	free(head->array);
	free(head);
}
