#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a doubly linked list
 * @head: node head
 * Return: int sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
