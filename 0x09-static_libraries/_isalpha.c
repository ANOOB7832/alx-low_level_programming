#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for uppercase letters
 * Return: 0 or 1
 * @c: Character to test
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
