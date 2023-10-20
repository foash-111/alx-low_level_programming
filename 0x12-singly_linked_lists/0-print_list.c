#include"lists.h"
/**
 * print_list - print the data of the linked list
 * @h: pointer to the first node of the list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			printf("[0] (nil)\n");
			else
			printf("[%d] %s\n", h->len, h->str);

			h = h->next;
			count++;
		}
	}
	return (count);
}
