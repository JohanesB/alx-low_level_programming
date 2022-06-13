#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: pointer to a
 * @b: pointer to b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
