#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *old, *new;

	old = head;
	new = head;

	while (new)
	{
		new = new->next;
		free(old);
		old = new;
	}
}
