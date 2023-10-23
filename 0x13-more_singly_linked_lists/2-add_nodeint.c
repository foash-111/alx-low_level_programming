#include"lists.h"

/**
 * add_nodeint - ....
 * @head: pointer to the head
 * @n: data of the new node
 * Return: number of nodes
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
else
{
	newnode->n = n;

	newnode->next = *head;
	*head = newnode;
}
return (newnode);
}
