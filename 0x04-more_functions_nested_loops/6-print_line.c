#include <stdio.h>
#include "main.h"
/**
 * print_line - prints an underscore n times
 * @n: the amount of underscores to print for a line
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
