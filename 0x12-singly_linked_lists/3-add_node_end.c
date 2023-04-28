#include "lists.h"
#include <string.h>

/**
 *add_node_end - add  new node to the end
 *@head: head of node pointer
 *@str:str in node to duplicate
 *Return: Node_tail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_tail;
	list_t *temp;

	unsigned int len = 0;

	while (str[len])
		len++;

	node_tail = malloc(sizeof(list_t));

	if (!node_tail)
	{
		return (NULL);
	}

	node_tail->str = strdup(str);
	node_tail->len = len;
	node_tail->next = NULL;

	if (*head == NULL)
	{
		*head = node_tail;
		return (node_tail);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = node_tail;

	return (node_tail);
}
