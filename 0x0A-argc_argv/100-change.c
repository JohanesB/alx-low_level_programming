#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: count an argument
 * @argv: vector of an argument
 * Return: 0 if no errors else 1
 */
int main(int argc, char *argv[])
{
	int a, i, t, n = 0;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (0);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			t = a / c[i];
			a -= t * c[i];
			n += t;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", n);
	return (0);
}
