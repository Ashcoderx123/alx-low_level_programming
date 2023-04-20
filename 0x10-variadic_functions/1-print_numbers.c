#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - print numbers in arg
 *@separator: string A
 *@n: number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(str, int));
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
	}

	va_end(str);
	printf("\n");
}
