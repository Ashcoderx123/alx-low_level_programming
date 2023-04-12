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
	unsigned int len, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}

	while ((str[i] = newstr[i]) != '\0')
	{
		i++;
	}

	return (newstr);
}
