#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the table
 * @key: given key
 * @value: data of the key in the table
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int i = 0;
	hash_node_t *temp;
	
	if (ht == NULL || value == NULL)
		return (0);

	if (!*key || key == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	temp->key = strdup(key);
	temp->value = strdup(value);

	if(ht->array[i] != NULL)
		temp->next = ht->array[i];
	ht->array[i] = temp;
	return (1);
}
