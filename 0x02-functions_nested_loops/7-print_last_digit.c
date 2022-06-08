#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @n: number to test
 * Return: l (Last digit of number)
 */
int print_last_digit(int n)
{
	int l, p;

	l = n % 10;
	if (l <  0)
		l = -l;
	p = '0' + l;
	_putchar(p);
	return (l);
}
