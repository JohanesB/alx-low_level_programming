#include <stdio.h>
/**
 * main - multiplies two number
 * @argc: count the argument
 * @argv: vector of an argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
	}
	printf("%d\n", mul);
	return (0);
}
