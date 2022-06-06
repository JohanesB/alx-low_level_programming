#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int single;

	for (single = '0'; single <= '9'; single++)
		putchar(single);
	putchar('\n');
	return (0);
}
