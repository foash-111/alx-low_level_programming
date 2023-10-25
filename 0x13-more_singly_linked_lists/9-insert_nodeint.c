#include"lists.h"

/**
 * insert_nodeint_at_index - ....
 * @head: pointer to the head
 * @idx: nth index that should i add
 * @n: data of the new node
 * Return: number of nodes
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode, *current;
unsigned int count = 0;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;
if (*head == NULL && idx == 0)
{
	*head = newnode;
	return (newnode);
}
else
{
current = *head;
while (current && count <= idx)
{
if (count == (idx - 1))
{
	if (current->next == NULL)
		current->next = newnode;
	else
	{
		newnode->next = current->next;
		current->next = newnode;
	}
	return (newnode);
}
count++;
current = current->next;
}
free(newnode);
}
return (NULL);
}
