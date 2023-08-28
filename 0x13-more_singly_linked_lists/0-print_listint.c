#include "lists.h"

/**
 * print_listint - Print all the elements of a list_int list
 * @h: data type pointer of struct
 * Return: elements of the str s
 */
size_t print_listint(const listint_t *h)
{
	unsigned int s = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		s++;
	}
	return (s);
}
