#include "lists.h"
/**
 * list_len - returns the length of the string.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t no_of_elem;

	no_of_elem = 0;
	while (h != NULL)
	{
		h = h->next;
		no_of_elem++;
	}
	return (no_of_elem);
}
