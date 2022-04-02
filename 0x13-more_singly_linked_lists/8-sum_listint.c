#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: head of the list
 * Return: the sum of all data on the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
