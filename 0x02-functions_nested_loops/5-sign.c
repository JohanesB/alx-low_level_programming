#include "main.h"
/**
 * print_sign - prints the sign of a number
 * Description - Write a function that prints the sign of a number
 * @n: An input number
 * Return: 1 if number is positive, o if number is 0, or
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
