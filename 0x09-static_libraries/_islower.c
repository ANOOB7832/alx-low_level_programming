#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for uppercase letters
 * Return: 0 or 1
 * @c: Character to test
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
