#include"lists.h"

/**
 * reverse_listint - ....
 * @head: pointer to the head
 * Return: pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *newlist = NULL;
listint_t *current = NULL;

if (head == NULL || *head == NULL)
return (NULL);

while (*head)
{
current = *head;
(*head) = (*head)->next;

current->next = newlist;
newlist = current;


}

return (newlist);
}
