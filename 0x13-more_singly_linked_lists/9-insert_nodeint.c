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
listint_t *newnode;
listint_t *current;
unsigned int count = 1;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
else
	newnode->n = n;

if (head == NULL)
return (NULL);

if (*head == NULL && idx == 0)
{
	newnode->next = NULL;
	*head = newnode;
	return (newnode);
}

current = *head;

while (current->next && count < idx)
{

	current = current->next;
	count++;
}

	if (current && count == idx)
	{
		if (current->next == NULL)
			newnode->next = NULL;
		else
			newnode->next = current->next;

	current->next = newnode;
	}
	return (newnode);
}
