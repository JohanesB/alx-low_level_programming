#include "main.h"
/**
 * print_last_digit -  a function that prints the last digit of a number
 * @x : integer input
 * Description: Write a function that prints the last digit of a number.
 * Returns: the value of the last digit
 */
int print_last_digit(int x)
{
	int i;
	if (x < 0)
		i = -1 * (x % 10);
	else
		i = x % 10;
	_putchar(i + '0');
	return (i % 10);
}