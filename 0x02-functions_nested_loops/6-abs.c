#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @n: integer
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
