#include"lists.h"
/**
 * insert_dnodeint_at_index - insert_node_at_index
 * @h: pointer points to the head
 * @n: data node
 * @idx: target index .. starting from 0
 * Return: the address of new node we inserted
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (*h); }
current = *h;
while (current)
{
	if (count == idx)
	{
		if (idx == 0)
		{
			new_node->prev = NULL;
			new_node->next = *h;
			(*h)->prev = new_node;
			*h = new_node; }
		else if (current->next == NULL)
		{
			new_node->next = NULL;
			new_node->prev = current;
			current->next = new_node; }
		else
		{
		new_node->next = current;
		new_node->prev = current->prev;
		current->prev->next = new_node;
		current->prev = new_node; }
		return (new_node);
	}
	current = current->next, count++; }
free(new_node);
return (NULL);
}
