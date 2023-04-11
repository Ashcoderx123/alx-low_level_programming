#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments
 * @argc: count of arguments
 * @argv: string of arguments
 * Return: 0 Always Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
