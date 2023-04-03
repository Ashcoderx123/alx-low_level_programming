#include "main.h"

/**
 * *_memset - set and fills memory bytes
 * @s: pointer to buffer
 * @b: desired value
 * @n: array size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
