#include "lists.h"
/**
 *add_node_end - function that add a node to the end of the list
 *@head: head of the list
 *@str: string
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_givenp(list_t **head, const char *str)
{
	list_t *temp;
	list_t *newtemp;
	unsigned int j = 0;

	while (str[j])
		j++;

	newtemp = malloc(sizeof(list_t));
	if (newtemp == NULL)
	{
		return (NULL);
	}
	newtemp->str = strdup(str);
	newtemp->len = j;
	newtemp->next = NULL;

	if (*head == NULL)
	{
		*head = newtemp;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	temp->next = newtemp;
	return (newtemp);
}
