#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 * @head: head of list
 * @n: data
 *
 * Return:address of new element(success); NULL(failurew)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (ptr);
}
