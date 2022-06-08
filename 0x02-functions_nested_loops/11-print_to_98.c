#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the code
 * @n: integer n
 * description: a function that prints all natural numbers from n to 98
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 89; n++)
		{
			printf("%d", n);
			if (n == 89)
				continue;
			printf(",");
			printf(" ");
		}
		printf("/n");
	}
	else
	{
		for (; n >= 89; n--)
		{
			printf("%d", n);
			if (n == 89)
				continue;
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
}
