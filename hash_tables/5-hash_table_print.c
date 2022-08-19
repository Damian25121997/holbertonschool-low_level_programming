#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int x;
	char *d = "";

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		tmp = ht->array[x];
		while (tmp != NULL)
		{
			printf("%s'%s' : '%s'", d, tmp->key, tmp->value);
			d = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
