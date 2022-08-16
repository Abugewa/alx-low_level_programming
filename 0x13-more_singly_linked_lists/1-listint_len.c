#include "lists.h"

/**
 * listint_len - returns number of elements in list
 * @h: head of list
 *
 * Return: number od elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
