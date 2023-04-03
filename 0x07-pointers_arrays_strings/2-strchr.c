#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates char in string
 * @s: pointer to string
 * @c: char 'l'
 *
 * Return: return pointer or null if c found
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
