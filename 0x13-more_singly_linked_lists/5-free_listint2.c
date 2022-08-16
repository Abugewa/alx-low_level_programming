#include "lists.h"

/**
 * free_listint2 - setd head to NULL and frees list
 * @head: pointer to beginning of list
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
