#include "lists.h"

/**
 *pop_listint - function to deletr the head node
 *@head: pointer to pointer to head node
 *
 * Return: int value
 */

int pop_listint(listint_t **head)
{
	listint_t *ptrs;
	int ns;

	if (!head || !*head)
		return (0)
	ns = (*head)->n;
	ptrs = (*head)->next;
	free(*head);
	*head = ptrs;

	return (ns);
}
