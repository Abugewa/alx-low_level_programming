#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the beginning of list
 *
 * Return: head node's data, n(success);
 * 0(empty linked list)
 */

int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);
	curr = *head;
	h_node = curr->n;
	h = curr->next;
	free(curr);

	*head = h;

	return (h_node);
}
