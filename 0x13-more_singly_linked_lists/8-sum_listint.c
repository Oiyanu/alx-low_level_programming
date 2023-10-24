#include "lists.h"
/**
 * sum_listint - sums all the data of a list
 * @head: points the first node in the linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int calc = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		calc += head->n;
		head = head->next;
	}
	return (calc);
}
