#include "hash_tables.h"

/**
 * hash_table_get - hash_table_get
 * @ht: pointer to the hash table
 * @key: key string in each node
 * Return: pointer to the value which related to the key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *current = NULL;

if (ht == NULL)
return (NULL);

index = key_index((const unsigned char *) key, ht->size);

current = ht->array[index];

while (current)
{
	if (strcmp(current->key, key) == 0)
	return (current->value);

	current = current->next;
}

return (NULL);
}
