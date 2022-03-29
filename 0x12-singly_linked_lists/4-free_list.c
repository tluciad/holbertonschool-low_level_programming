#include "lists.h"
/**
 * free_list - function that frees a list.
 *@head: head
 */
void free_list(list_t *head)
{
	list_t *temp, *store;
	temp = head;

	while (temp != NULL)
	{
		store = temp->next;
		free(temp);
		temp = store;
	}
}
