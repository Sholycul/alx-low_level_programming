#include "lists.h"
/**
 * add_node - adds a new node to the head
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nhead;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nhead = 0; str[nhead]; nhead++)
		;

	new->len = nhead;
	new->next = *head;
	*head = new;

	return (*head);
}
