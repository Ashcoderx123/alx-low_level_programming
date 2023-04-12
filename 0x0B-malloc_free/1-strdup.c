#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup - duplicate str
 *@str: str to duplicate
 *Description: copy str into newstr
 *Return: newstr
 */

char *_strdup(char *str)
{
	char *newstr;
	int len, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		newstr[i] = str[i];
	}

	return newstr;
}
