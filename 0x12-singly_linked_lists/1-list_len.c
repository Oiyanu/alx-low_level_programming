#include <stdlib.h>
#include "lists.h"
/**
 * list_len - displays number of elements in a list
 * @h: linked list
 * Return: eleents in the list
 */

size_t list_len(const list_t *h)
{
	size_t snow;

	snow = 0;
	while (h)
	{
		h = h->next;
		snow++;
	}
	return (snow);
}
