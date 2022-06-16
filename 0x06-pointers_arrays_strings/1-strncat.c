#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: string to copy
 * @src: string being copied
 * @n: largest number of bytes to copy
 * Return: address of dust
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++
	}
	return (dest);
}
