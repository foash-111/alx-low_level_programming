#include"lists.h"

/**
 * delete_nodeint_at_index - ....
 * @head: pointer to the head
 * @index: nth index that should I delete
 * Return: number of nodes
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *checker;
unsigned int count = 1;

if (head == NULL || *head == NULL)
	return (-1);

current = *head;
checker = current;
if (index == 0)
{
if (current->next == NULL)
	*head = NULL;
else
	*head = current->next;
free(current);
return (1);
}
else
{
	checker = current->next;
while (current && count <= index)
{
if (count == index)
{
if (checker->next == NULL)
	current->next = NULL;
else
	current->next = checker->next;
free(checker);
return (1);
}
count++;
current = current->next;
checker = checker->next;
}
return (-1);
}
return (-1);
}
