#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @ht: is the hash table you want to add or update the key/value to
* @key: is the key input
* @value: is the value associated with the key
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int size, index;

	new = malloc(sizeof(hash_node_t));
	if (!new || !key || !value || !ht)
	{
		free(new);
		return (0);
	}
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	new->key = strdup(key);
	new->value = strdup(value);
	if(!new->key || !new->value)
		free(new->key), free(new->value);
	if (!ht->array[index])
	{
		ht->array[index] = new;
		new->next = NULL;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			free(new->key), free(new->value), free(new);
		}
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}
	return (1);
}
