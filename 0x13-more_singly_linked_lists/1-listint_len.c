#include "lists.h"

/**
 * listint_len - counts the number of elements in linked list
 * @h: head of the linked list
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
