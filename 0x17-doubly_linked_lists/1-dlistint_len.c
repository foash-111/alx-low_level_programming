#include"lists.h"
/**
 * dlistint_len - function that counts all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
