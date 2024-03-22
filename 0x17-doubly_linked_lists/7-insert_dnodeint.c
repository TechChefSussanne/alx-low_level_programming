#include <stdio.h>
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
    if (h == NULL)
        return NULL;

    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;
    
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (idx == 0)
    {
        if (*h != NULL)
        {
            new_node->next = *h;
            (*h)->prev = new_node;
        }
        *h = new_node;
        return new_node;
    }

    dlistint_t *current = *h;
    unsigned int i = 0;

    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->next = current->next;
    if (current->next != NULL)
        current->next->prev = new_node;

    current->next = new_node;
    new_node->prev = current;

    return new_node;
}

/* Function to print a doubly linked list */
void print_dlistint(dlistint_t *h)
{
    while (h != NULL)
    {
        printf("%d ", h->n);
        h = h->next;
    }
    printf("\n");
}

/* Function to free memory allocated for a doubly linked list */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);

    printf("Original list: ");
    print_dlistint(head);

    printf("-----------------\n");

    insert_dnodeint_at_index(&head, 5, 4096);

    printf("After inserting at index 5: ");
    print_dlistint(head);

    free_dlistint(head);

    return (EXIT_SUCCESS);
}
