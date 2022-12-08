#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list.
 * @head: head of the list
 * @n: number to add in the new node
 * Return: The address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *cur = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		if (!(*head))
			*head = new_node;
		else
		{
			while (cur->next)
			       cur = cur->next;
			cur->next = new_node;
			new_node->prev = cur;
		}
	}
	return (new_node);
}
