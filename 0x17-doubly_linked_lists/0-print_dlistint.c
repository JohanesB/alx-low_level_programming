#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *)
{
	const dlistint_t *node = h;
	size_t x = 0;

	while (node)
	{
		printf("%i\n", node->n);
		x++;
		node = node->next;
	}
	return (x);
}
