#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the value of pointer a and pointer b
 * @a: first pointer to swap
 * @b: second pointer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
