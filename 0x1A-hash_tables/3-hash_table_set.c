#include "hash_tables.h"

/**
* _strdup - duplicate
* @str: string we want to dublicate
* Return: pointer to dublicated string
*/

char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc((sizeof(char) * len) + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
/**
 * hash_table_set - hash_table_set
 * @ht: pointer to hash-table
 * @key: string in a node
 * @value: string in some node
 * Return: 1 in success, 0 otherwisw
 *
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = key_index((const unsigned char *)key, ht->size);
hash_node_t *current = NULL, *new_node =  NULL;


if (ht == NULL || key == NULL || value == NULL)
{
return (0);
}
current = ht->array[index];
while (current)
{
	if (strcmp(current->key, key) == 0)
	{
	free(current->value);
	current->value = NULL;
	current->value = _strdup((char *)value);
	return (1);
	}
	current = current->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = _strdup((char *)key);
new_node->value = _strdup((char *)value);
new_node->next = NULL;
if (ht->array[index] == NULL)
{
ht->array[index] = new_node;
return (1);
}
else
{
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
return (0);
}
