#include "main.h"
/**
 * _isalpha - Checks if character is alphabetic
 * @c: character to check
 *
 * Return: 1 (Is alphabetic)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
