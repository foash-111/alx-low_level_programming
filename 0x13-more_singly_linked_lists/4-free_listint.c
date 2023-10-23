#include"lists.h"

/**
 * free_listint - ....
 * @head: pointer to the head
 * Return: (void)
*/

void free_listint(listint_t *head)
{

listint_t *current = head;

while (head)
{
	current = head;
	head = head->next;
	free(current);


}
}
