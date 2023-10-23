#include"lists.h"

/**
 * add_nodeint_end - ....
 * @head: pointer to the head
 * @n: data of the new node
 * Return: number of nodes
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *current = *head;
if (current == NULL)
return (NULL);

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
else
{
while (current->next)
{
	current = current->next;
}
current->next = newnode;
newnode->next = NULL;

}

}
