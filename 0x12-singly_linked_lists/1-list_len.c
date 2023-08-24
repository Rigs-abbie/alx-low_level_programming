#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list
 * @h: data type pointer of struct
 * Return: elements of the str i
 */
size_t list_len(const list_t *h)
{
	const list_t *s;
	size_t node = 0;

	s = h;
	while (s != NULL)
	{
		s = s->next;
		node++;
	}
	return (node);
}
