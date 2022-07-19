#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the beginning of the list
 * @n: integer to add to the list
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}
		else
		{
			current = *head;
			while (current->next != NULL)
				current = current->next;
			current->next = new;
			return (new);
		}
	}
	return (NULL);
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
"3-add_nodeint_end.c" [New File]                         0,0-1         All

