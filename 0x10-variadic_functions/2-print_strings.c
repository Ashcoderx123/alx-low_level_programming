#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_strings - print string arguments passed
 *@separator: string printer to separate
 *@n: number of strings
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	va_end(arg);
	printf("\n");
}
