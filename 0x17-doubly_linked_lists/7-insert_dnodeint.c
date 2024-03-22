#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (h == NULL)  /* Check if the pointer to the head is NULL */
        return NULL;

    dlistint_t *new_node = malloc(sizeof(dlistint_t));  /* Create the new node */
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (*h == NULL && idx != 0)  /* List is empty, and index is not 0 */
    {
        free(new_node);
        return NULL;
    }

    if (idx == 0)  /* Add at the beginning */
    {
        if (*h != NULL)
            (*h)->prev = new_node;
        new_node->next = *h;
        *h = new_node;
        return new_node;
    }

    dlistint_t *current = *h;
    unsigned int i = 0;

    while (current != NULL && i < idx - 1)  /* Traverse to the node at index idx - 1 */
    {
        current = current->next;
        i++;
    }

    if (current == NULL)  /* Index is out of bounds */
    {
        free(new_node);
        return NULL;
    }

    /* Adjust pointers */
    new_node->prev = current;
    new_node->next = current->next;

    if (current->next != NULL)
        current->next->prev = new_node;

    current->next = new_node;

    return new_node;
}
