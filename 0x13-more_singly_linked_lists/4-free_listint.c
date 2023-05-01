#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of list
 *
 * Description: This function frees a listint_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *freed;

	while (head != NULL)
	{
		freed = head;
		head = head->next;
		free(freed);
	}
}
