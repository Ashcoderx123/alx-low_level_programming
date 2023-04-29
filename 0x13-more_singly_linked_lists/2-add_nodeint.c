#include "lists.h"

/**
 * add_nodeint - add new node to the start of the list
 * @head: pointer to head pointer
 * @n: int var inside the node
 * Return: pointer to list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = (listint_t *)malloc(sizeof(listint_t));

	if (first == NULL)
	{
		printf("Error allocating memory\n");
		return (NULL);
	}

	first->n = n;
	first->next = *head;
	*head = first;

	return (first);

}
