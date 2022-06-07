#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	char word[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(word[x]);
	}
	_putchar('\n');
	return (0);
}
