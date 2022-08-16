#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: head od linked list
 *
 * Return: sum; 0(if list is empty)
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
