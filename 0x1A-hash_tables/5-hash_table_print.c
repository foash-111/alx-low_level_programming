#include "hash_tables.h"

/**
 * hash_table_print - hash_table_print {key: value} pairs like dictionaries
 * in python
 * @ht: pointer to my hash table
 * Return: (nothing)
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0, flag = 0;

	if (ht == NULL)
	{
	return;
	}
printf("{");
while (i < ht->size)
{
	current = ht->array[i];

	while (current)
	{

		if (flag == 0)
		{
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		}
		else
		printf(", '%s': '%s'", current->key, current->value);

		current = current->next;
	}
	i++;
}
printf("}\n");
}
