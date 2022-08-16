#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of list
 * @head: head of the list
 * @n: data
 *
 * Return: address of new element(success), NULL(failure)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
