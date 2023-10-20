#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - new node added at the beginning of list
 * @head: head of linked list
 * @str: string to be stored in list
 * Return: head address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nas;
	int len = 0;

	while (str[len])
	len++;

	nas = malloc(sizeof(list_t));
	if (!nas)
	return (NULL);

	nas->len = len;
	nas->str = strdup(str);
	nas->next  = (*head);
	(*head) = nas;
	return (*head);
}

