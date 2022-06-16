#include "main.c"
/**
 * _strcat:  a function that concatenates two strings.
 * @dest: a pointer to char
 * @src: a pointer to char
 * Return: char 
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
