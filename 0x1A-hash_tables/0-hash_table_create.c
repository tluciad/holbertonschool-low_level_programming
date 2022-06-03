#include "hash_tables.h"
/**
 * hash_table_create -  function that creates a hash table.
 * @size: size of the table
 * Return: new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = malloc(sizeof(hash_table_t));
    if (table == NULL)
    {
        return NULL;
    }
    table->size = size;
    table->array = malloc(sizeof(table->array) * size);
    if ((table->array) == NULL)
    {
        return NULL;
    }
    free (table);
    return table;
}