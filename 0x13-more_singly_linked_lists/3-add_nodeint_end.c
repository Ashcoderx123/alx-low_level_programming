#include "lists.h"

/**
 *add_nodeint_end - add new node to end of list
 *@n: node var element
 *@head: pointer to pointer to head of list
 *
 * Return: pointer to node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;

	last = (listint_t *)malloc(sizeof(listint_t));

	if (last == NULL)
	{
		printf("Error Allocating Memory\n");
		return (NULL);
	}

	last->n = n;
	last->next = NULL;
	
	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		listint_t *cur = *head;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}

		cur->next = last;
	}


	return (last);
}
