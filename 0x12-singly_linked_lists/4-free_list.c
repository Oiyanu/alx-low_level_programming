#include "lists.h"
#include <stdlib.h>
/**
 * free_list - list to be freed
 * @head: head of a linked list
 */

void free_list(list_t *head)
{
	list_t *snow;

	while ((snow = head) != NULL)
	{
		head = head->next;
		free(snow->str);
		free(snow);
	}
}
