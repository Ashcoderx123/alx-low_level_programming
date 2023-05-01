#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a requested position
 * @head: pointer to head of ode
 * @idx: where new node is to be created
 * @n: data to add in the node created
 *
 * Return: pointer to the new node created, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *node;
	listint_t *cur = *head;

	node = (listint_t *)malloc(sizeof(listint_t));
	
	if (!node || *head == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (x = 0; cur && x < idx; x++)
	{
		if (x == idx - 1)
		{
			node->next = cur->next;
			cur->next = node;
			return (node);
		}
		else
		{
			cur = cur->next;
		}

	}

	return (NULL);
}
