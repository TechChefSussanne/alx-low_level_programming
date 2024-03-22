#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (head == NULL || *head == NULL)
        return -1;

    dlistint_t *current = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    unsigned int i = 0;
    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
        return -1;

    current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;
    free(current);

    return 1;
}

