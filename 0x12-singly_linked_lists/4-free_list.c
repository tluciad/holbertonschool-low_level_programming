#include "lists.h"
/**
 * free_list - function that frees a list.
 *@head: head
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
