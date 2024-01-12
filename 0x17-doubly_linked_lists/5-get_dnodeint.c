#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at the nth position
 *  of a dlistint_t linked list.
 *
 * @head: pointer to head of the list
 * @index: index of the node to search for, start from 0
 * Return: nth node or NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == size)
	return (temp);
	size++;
	temp = temp->next;
	}
	return (NULL);
}
