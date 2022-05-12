#include "lists.h"
/**
 *add_dnodeint_end -
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *last;
    dlistint_t *new;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    last = *head;

    new->n = n;
    new->prev = NULL;
    new->next = NULL;
    if (*head == NULL)
    {
        new->next=*head;
        *head = new;
        return (new);
    }   
    while (last->next)
        last = last->next;

    last->next = new;
    new->prev = last;

    return (new);
}
