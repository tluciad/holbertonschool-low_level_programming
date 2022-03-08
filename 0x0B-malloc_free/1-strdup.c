#include "main.h"
#include <stdlib.h>
/**
 * @_strdup -  function that returns a pointer to a newly allocated space in memory
 * @str2: new string
 * Return: Null or Str2
 */
char *_strdup(char *str)
{
    int i;
    char *str2;

    if (str == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)

    str2 = malloc(sizeof(char) * (i + 1));
        if (str2 == NULL)
            return (NULL);

        for (i = 0; str[i]; i++);
        str2[i] = str[i];

    str2[i] = '\0';
    return (str2);
}