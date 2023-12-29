#include "hash_tables.h"

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
hash_node_t *head, *new_node =  malloc(sizeof(hash_node_t));

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;

head = ht->array[index];

if(head == NULL)
{
head = new_node;
return (1);
}
else
{
    new_node->next = ht->array[index];
    head = new_node; 
    return (1);
}
return (0);
}
