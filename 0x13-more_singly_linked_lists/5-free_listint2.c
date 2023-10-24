#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: points the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *ghost;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		ghost = (*head)->next;
		free(*head);
		*head = ghost;
	}
	free(*head);
	*head = NULL;
}
