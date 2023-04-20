#include "function_pointers.h"

/**
 * array_iterator - pass value of array
 * @size: size of array
 * @array: array to print
 * @action: pointer to function to execute
 *
 * Return: void;
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
