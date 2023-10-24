#include "lists.h"
/**
 * reverse_listint - function reverses a singly linked list
 * @head: pointer to head
 * Return: a pointer to the first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *last = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = last;
last = *head;
*head = next;
}

*head = last;

return (*head);
}
