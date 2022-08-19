#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp = NULL, *temp2 = NULL;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];
		while (temp)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
		free(temp);
	}
	free(ht->array);
	free(ht);
}
