#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t no_of_elem;

	no_of_elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		no_of_elem++;
	}
	return (no_of_elem);
}
