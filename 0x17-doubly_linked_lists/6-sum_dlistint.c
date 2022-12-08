#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: the head of the doubly linked lists
 * Return: The sum of all the data of a dlistint_t
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
