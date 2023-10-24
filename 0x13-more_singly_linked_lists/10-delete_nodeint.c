#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node of a list at a certain index
 * @head: pointer to the beginning of list
 * @index: node to be freed
 * Return: 1 (success) and -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ghost = *head;
listint_t *core = NULL;
unsigned int k = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(ghost);
return (1);
}

while (k < index - 1)
{
if (!ghost || !(ghost->next))
return (-1);
ghost = ghost->next;
k++;
}

core = ghost->next;
ghost->next = core->next;
free(core);

return (1);
}
