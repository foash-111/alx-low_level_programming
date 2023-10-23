#include"lists.h"

/**
 * print_listint - ....
 * @h: pointer to the head
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
int count = 0;
const listint_t *current = h;

if (current == NULL)
return (0);
else
{
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
}
return (count);
}
