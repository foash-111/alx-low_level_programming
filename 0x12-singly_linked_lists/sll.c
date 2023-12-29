#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */







list_t *add_node_end(list_t **head, const char *str)
{
int count = 0;

const list_t *current;

current = h;

while (current != NULL)
{
    printf("%d %s\n", h->len, current->str);
    current = current->next;
    count++;
}

return (count);

}
