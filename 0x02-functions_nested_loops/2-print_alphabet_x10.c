#include "main.h"
/**
 * print_alphabet_x10 - print 10 lines of the alphabet
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	int n, t = 0;

	while (t < 10)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
	t++;
	}
}
