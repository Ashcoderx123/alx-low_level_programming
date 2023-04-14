#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for array
 * @nmemb: number of elements
 * @size: size of array
 * Return: ptr always
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (!ptr)
		return (NULL);

	return (ptr);

}
