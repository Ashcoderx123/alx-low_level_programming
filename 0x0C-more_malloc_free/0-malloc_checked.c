#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory for pointer
 * @b: passed argument to function
 * Return: ptr Always
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
