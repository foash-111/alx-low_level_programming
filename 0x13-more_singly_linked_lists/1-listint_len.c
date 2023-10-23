#include"lists.h"

/**
 * listint_len - ....
 * @h: pointer to the head
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
int count = 0;
const listint_t *current = h;

if (current == NULL)
return (0);
else
{
	while (current)
	{
		current = current->next;
		count++;
	}
}
return (count);
}
