#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: count the argument
 * @argv: vector of array hold string
 * Return: always 0
 */ 
int main(int argc, char *argv[])
{
	int count;
	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
