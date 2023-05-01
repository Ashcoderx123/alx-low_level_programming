#include "lists.h"

/**
 * get_nodeint_at_index - return the requested node at index
 * @head: first node in the list
 * @index: index of node
 *
 * Return: pointer to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *ptro = head;

	while (ptro && n < index)
	{
		ptro = ptro->next;
		n++;
	}

	return (ptro ? ptro : NULL);
}
