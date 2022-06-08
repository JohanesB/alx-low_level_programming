#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @x : integer input
 * Return: Absolut value of number x
 * Discription: This function returns absolute value of a number
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
