#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c[] = {'_','p','u','t','c','h','a','r'};
	int n = 0;
	while (n <= 7)
	{
	_putchar(c[n]);
	n++;
	}
	_putchar('\n');
	return (0);
}
