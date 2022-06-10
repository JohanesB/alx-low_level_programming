#include "main.h"

/**
 * print_line - straight line in the terminal
 * @n: number of times the character 
 * Return: Nothing
 */
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	if (n <= 0)
		_putchar('\n');
}
