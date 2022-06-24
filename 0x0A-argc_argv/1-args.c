#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: count the argument
 * @argv: vector of array holds string
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc-1);
	return (0);
}
