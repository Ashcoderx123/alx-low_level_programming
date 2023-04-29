#include "lists.h"

/**
 * print_listint - print linked list elements
 * @h: linked list head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *itr = h;


	while (itr != NULL)
	{
		printf("%d\n", itr->n);
		itr = itr->next;
		count++;
	}

	return (count);
}
