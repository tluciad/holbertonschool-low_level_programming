#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @index:  is the index of the node, starting at 0
 * @head: head of the list
 * Return: the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
