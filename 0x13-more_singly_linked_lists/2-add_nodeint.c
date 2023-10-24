#include "lists.h"
/**
 * add_nodeint - to add node to the beginning of linked list
 * @head: head pointer
 * @n: integer to be created
 * Return: pointer to new node and NULL if wrong
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *snow;

	snow = malloc(sizeof(listint_t));
	if (!snow)
	return (NULL);
	snow->n = n;
	snow->next = *head;
	*head = snow;

	return (snow);
}
