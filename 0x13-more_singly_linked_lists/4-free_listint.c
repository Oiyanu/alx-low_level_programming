#include "lists.h"
/**
 * free_listint - function frees linked list
 * @head: listint_t list to be freed
 * Return: nil
 */
void free_listint(listint_t *head)
{
	listint_t *ghost;

	while ((ghost = head) != NULL)
	{
		head = head->next;
		free(ghost);
	}
}
