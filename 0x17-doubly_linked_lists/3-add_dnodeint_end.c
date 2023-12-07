#include"lists.h"
/**
 * add_dnodeint_end - add node at the end of the list
 * @head: pointer points to the head
 * @n: data node
 * Return: the address of new node
 *
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *new_node = NULL;
        dlistint_t *current = NULL;

        new_node = malloc(sizeof(dlistint_t));
        if (new_node == NULL)
                return (NULL);

        new_node->n = n;

        if (*head == NULL)
        {
                *head = new_node;
                new_node->next = NULL;
                new_node->prev = NULL;
                return (*head);
        }

current = *head;
while (current->next != NULL)
{
        current = current->next;
}
current->next = new_node;
new_node->next = NULL;
new_node->prev = current;
return (new_node);
}
