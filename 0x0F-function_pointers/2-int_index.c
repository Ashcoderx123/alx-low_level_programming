#include "function_pointers.h"

/**
 * int_index - check array index
 * @array: array to access
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
