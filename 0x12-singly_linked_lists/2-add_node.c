#include "lists.h"
/**
 *add_node - function that add a node to the list
 *@head: head of the list
 *@str: string
 *Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	temp = (list_t *)malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;

	*head = temp;

	return (*head);
}
