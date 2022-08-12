#include "lists.h"

/**
 * list_len - returns no of elements in list
 * @h: singly linked list
 *
 * Return: no of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num;
	}
	return (num);
}
