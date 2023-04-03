#include "main.h"

/**
 * *_memcpy - function to copy memory bytes
 * @dest: destination array
 * @src: source array
 * @n: size of array
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
