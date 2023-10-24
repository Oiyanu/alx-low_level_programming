#include "lists.h"
/**
 * get_nodeint_at_index - function returns a node at an index
 * @head: pointer to first node in the linked list
 * @index: index of node to retrieve
 * Return: pointer to return node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
