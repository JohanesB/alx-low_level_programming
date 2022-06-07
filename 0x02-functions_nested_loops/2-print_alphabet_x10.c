#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Description: function uses _putchar function to print
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
