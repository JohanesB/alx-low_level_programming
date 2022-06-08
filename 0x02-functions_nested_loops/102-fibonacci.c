#include <stdio>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%d, %d", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i != 49)
			printf("%d, ", fibonacci[i]);
		else
			printf("%d\n", fibonacci[i]);
	}
	return (0);
}
