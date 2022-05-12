#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a doubly linked list
 * @head: head node
 * @index: index node
 * Return: data nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (i < index)
	{
		i++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
