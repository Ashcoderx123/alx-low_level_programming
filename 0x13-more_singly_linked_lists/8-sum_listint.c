#include "lists.h"

/**
 * sum_listint - function to calc sum of (n) data in nodes
 *@head: pointer to first node in the list
 *
 * Return: int value (calc)
 */


int sum_listint(listint_t *head)
{
	int calc = 0;
	listint_t *c = head;

	while (c)
	{
		calc += c->n;
		c = c->next;
	}

	return (calc);

}
