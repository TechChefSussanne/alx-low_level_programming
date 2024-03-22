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
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (idx == 0)
        return add_dnodeint(h, n);  /* Add at the beginning */

    /* Traverse to the node at index idx - 1 */
    while (temp != NULL && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    /* If index is out of bounds or temp is NULL */
    if (temp == NULL)
        return NULL;

    /* Create the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;

    /* Adjust pointers */
    new_node->prev = temp;
    new_node->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = new_node;

    temp->next = new_node;

    return new_node;
}

