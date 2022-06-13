#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to point a character
 * Return: integer
 */
int _strlen(char *s)
{
	int i;

	for (; *s != '\0'; s++)
		i++;
	return (i);
}
