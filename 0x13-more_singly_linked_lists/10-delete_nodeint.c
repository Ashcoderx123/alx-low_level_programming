#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node requested at specific index
 * @head: pointer to pointer to head of list
 * @index: index desired to execute function task
 *
 * Return: 1 for success or -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL;
	listint_t *c = *head;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	while (x < index - 1)
	{
		if (!c || !(c->next))
		{
			return (-1);
		}
		c = c->next;
		x++;
	}

	ptr = c->next;
	c->next = ptr->next;
	free(ptr);

	return (1);
}
