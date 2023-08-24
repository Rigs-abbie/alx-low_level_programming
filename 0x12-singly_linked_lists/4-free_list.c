#include "lists.h"

/**
 * free_list - Free a list_t list
 * @head: Type pointer struct list_t
 * Return: free head
 */
void free_list(list_t *head)
{
	list_t *s;

	s = head;
	while (head != NULL)
	{
		s = head;
		head = head->next;
		free(s->str);
		free(s);
	}
	free(head);
}
