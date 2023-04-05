#include "main.h"

/**
 *_print_rev_recursion - function to print *S
 * @s: pinter to string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
