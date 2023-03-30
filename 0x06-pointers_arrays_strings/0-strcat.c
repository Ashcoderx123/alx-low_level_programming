#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate src to dest
 * @dest: string to use
 * @src: strings to use
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
