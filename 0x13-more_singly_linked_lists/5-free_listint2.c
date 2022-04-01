#include "lists.h"
/**
 * free_listint2 -  function that frees a list and
 * sets the head to NULL
 * @head : head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head && !*head)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
