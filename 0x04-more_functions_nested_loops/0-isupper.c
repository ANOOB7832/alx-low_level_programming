#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * Return: 0 or 1
 * @c: Character to test
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
