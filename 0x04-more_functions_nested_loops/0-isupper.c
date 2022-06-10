#include "main.h"
/**
 * main - check the code.
 * @c - Character variable
 * Return - c
 */
int _isupper(int c)
{
        char i;

	for (i = 'A'; i <= 'z'; i++)
	{
		if ( c == i)
			return (1);
		else
			return (0);
	}
}
