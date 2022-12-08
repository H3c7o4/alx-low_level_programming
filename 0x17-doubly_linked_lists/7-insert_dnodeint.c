#include "lists.h"

/** insert_dnodeint_at_index - function that inserts a new node at a given position.
 *
 * @h: head of a double linked list
 *
 * @idx: index where to insert the node
 *
 * @n: Value of the node
 *
 * Return: The address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *curr = *head;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		while (i != idx)
		{
			cur = cur->next;
			i++;
		}
		cur->next = new;
		new->prev = cur;
	}
	return (new);
}
