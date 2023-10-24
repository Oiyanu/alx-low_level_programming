#include "lists.h"
/**
 * listint_len - returns the number oof elements in a linked list
 * @h: head pointer to the list
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t tally;

	if (h == NULL)
		return (0);
	for (tally = 0; h != NULL; tally++)
	{
		h = h->next;
	}
	return (tally);
}
