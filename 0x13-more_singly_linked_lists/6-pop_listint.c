#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a list
 * @head: head of node
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if (*head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	result = (*head)->n;

	free(*head);
	*head = temp;
	return (result);
}
