#include "lists.h"
/**
 * free_listint -  a function that frees a list
 * @head: head of list 
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
