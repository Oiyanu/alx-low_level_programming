#include "lists.h"
/**
 * pop_listint - function deletes head node of linked list
 *@head: pointer to the list
 *Return: integer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *snow;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	snow = *head;
	*head = (*head)->next;
	free(snow);
	return (n);
}

