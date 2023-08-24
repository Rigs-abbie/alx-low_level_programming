#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: data type pointer of struct
 * Return: elements of the str i
 */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *s;

	i = 0;
	s = h;
	while (s != NULL)
	{
		if (s->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			s = s->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", s->len, s->str);
			s = s->next;
			i++;
		}
	}
	return (i);
}
