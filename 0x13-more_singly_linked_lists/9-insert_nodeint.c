#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts new node in a list
 * @head: pointer to the first node on the list
 * @idx: adds new node at index
 * @n: data of the node
 * Return: pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *snow;
	listint_t *ghost = *head;

	snow = malloc(sizeof(listint_t));
	if (!snow || !head)
	return (NULL);

	snow->n = n;
	snow->next = NULL;

	if (idx == 0)
	{
	snow->next = *head;
	*head = snow;
	return (snow);
	}

	for (y = 0; ghost && y < idx; y++)
	{
	if (y == idx - 1)
	{
	snow->next = snow->next;
	ghost->next = snow;
	return (snow);
	}
	else
	ghost = ghost->next;
	}

	return (NULL);
}

