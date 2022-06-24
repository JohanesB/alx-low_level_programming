#include <stdio.h>
/**
 * main - multiplies two number
 * @argc: count the argument
 * @argv: vector of an argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			mul = mul * atoi(argv[count]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
