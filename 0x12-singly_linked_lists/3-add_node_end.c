#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function adds a new node at the end
 * @head: head of the linked list
 * @str: string to put in the new code
 * Return: NULL if failed, or address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *snow, *dark;
	size_t ghost;

	snow = malloc(sizeof(list_t));
	if (snow == NULL)
		return (NULL);
	snow->str = strdup(str);

	for (ghost = 0; str[ghost]; ghost++)
		;
	snow->len = ghost;
	snow->next = NULL;
	dark = *head;

	if (dark == NULL)
	{
		*head = snow;
	}
	else
	{
		while (dark->next != NULL)
			dark = dark->next;
		dark->next = snow;
	}
	return (*head);
}

