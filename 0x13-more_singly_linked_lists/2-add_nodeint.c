#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: address of head
 * @n: integer
 * Return:  the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	if (!head)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	(*head) = temp;

	return (temp);
}
