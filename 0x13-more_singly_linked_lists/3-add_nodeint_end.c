#include "lists.h"
/**
 * add_nodeint_end - to add node at the end of a linked list
 * @head: points to the first element on list
 * @n: data input to the new list
 * Return: address of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *snow;
	listint_t *ghost;

	(void)ghost;

	snow = malloc(sizeof(listint_t));
	if (snow == NULL)
		return (NULL);

	snow->n = n;
	snow->next = NULL;
	ghost = *head;
	if (*head == NULL)
	{
		*head = snow;
	}
	else
	{
		while (ghost->next != NULL)
		{
			ghost = ghost->next;
		}
		ghost->next = snow;
	}

	return (*head);
}

