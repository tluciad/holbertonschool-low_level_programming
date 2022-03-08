#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer or NULL
 */

char *_strdup(char *str)
{
    char *d;
    int i;
    int size = 0;

    if (str == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)

        d = malloc((i + 1) * sizeof(char));

    if (d == 0)
    {
        return (NULL);
    }
    for (size = 0; size < i; size++)
    {
        d[size] = str[size];
    }
    return (d);
}
