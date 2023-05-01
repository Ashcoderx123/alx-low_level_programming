#include "lists.h"

/**
 * free_listint2 - function to free listint_t and set head to NULL
 * @head: pointer to pointer to head
 *
 * Description: function that frees a listint_t list.
 */

void free_listint2(listint_t **head)
{
	listint_t *freely;

	while (*head != NULL)
	{
		freely = *head;
		*head = (*head)->next;
		free(freely);
	}
	*head = NULL;
}
