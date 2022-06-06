#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/***
 * main - Entry point
 *
 * Return: Always 0(Access)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 9; y++)
		{
			for (z = 0; z < 10; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');

				if (x == 8 && y == 9 && z == 10)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
