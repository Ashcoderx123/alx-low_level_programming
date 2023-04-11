#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the file
 * @argc: number of arguments
 * @argv: argument strings
 *
 * Return: 0 Always Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
