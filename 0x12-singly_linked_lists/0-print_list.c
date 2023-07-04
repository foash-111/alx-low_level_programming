#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>

/**
 * print_list - print the data of single linked list
 *
 * @h: pointer to the head(the first node of the list)
 *
 * Return:the number of nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (h->str == NULL)
	printf("[0] (nil)\n");
else
	printf("[%d] %s\n", h->len, h->str);

count++;
h = h->next;

}

return (count);

}
