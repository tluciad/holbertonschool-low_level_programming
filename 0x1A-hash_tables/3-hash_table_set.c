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
	hash_node_t *new;
	hash_node_t *temp;
	char *tmp_val = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return(0);
	
	if (strlen(key) == 0 || key == NULL)
		return(0);
	
	tmp_val =strdup(value);
	if(tmp_val == NULL)
		return(0);
	
	i = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = tmp_val;
			temp->value = strdup(value);
			free(tmp_val);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = tmp_val;
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
