#include "main.h" 
/**
 * islower - checks for lowercase character
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
