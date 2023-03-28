#include "main.h"

/**
 * swap_int - change the values of a & b
 * @a: first parameter in 1-main.c
 * @b: second parameter in 1-main.c
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
