#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Description: see example
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k == 0)
			{
				if (j != 0)
					_putchar(' ');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n + '0');
				_putchar((n % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');                                                                  _putchar(' ');
			}
		}
		_putchar('\n');
	}
}
