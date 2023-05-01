#include "lists.h"

/**
 * free_listint2 - frees linked list listint_t
 * @head: pointer to head of listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL)
		return;

	while (*head)
	{
		freed = (*head)->next;
		free(*head);
		*head = freed;
	}

	*head = NULL;
}
