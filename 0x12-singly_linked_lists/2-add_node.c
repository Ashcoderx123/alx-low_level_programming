#include "lists.h"
#include <string.h>
/**
 *add_node - adds a new node at the beginning of a linked list
 *@head: pointer to node head
 *@str: string to duplicate
 *Return: Adress of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new;
	unsigned int len = 0;

	while (str[len])
		len++;

	node_new = malloc(sizeof(list_t));

	if (!node_new)
	{
		return (NULL);
	}

	node_new->str = strdup(str);
	node_new->len = len;
	node_new->next = (*head);
	(*head) = node_new;

	return (*head);
}
