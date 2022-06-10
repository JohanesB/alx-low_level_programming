#include <stdio.h>

/**
 * main : check the code
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if ((i % 3) == 0)
			printf("Buzz");
		else
			printf(i + " ");
	}
}
