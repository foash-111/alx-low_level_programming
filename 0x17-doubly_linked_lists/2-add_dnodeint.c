#include"lists.h"
/**
 * add_dnodeint - add node at the begining of the list
 * @head: pointer points to the head
 * @n: data node
 * Return: the address of new node
 * 
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = NULL;
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

new_node->prev = NULL;
new_node->next = *head;
(*head)->prev = new_node;
*head = new_node;
return (*head);

}
