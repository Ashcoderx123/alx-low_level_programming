#include "main.h"

/**
 *_pow_recursion - calculate the raise to the power
 * @x: first int to use
 * @y: second int
 * Return: the result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
