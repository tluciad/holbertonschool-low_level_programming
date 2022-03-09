#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: ssecond string to concatenate
 * Return: pointer to the array (Success), NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
    char *p;
    int i, st1, st2;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    for (st1 = 0; s1[st1] != '\0'; st1++)
    {
    }
    for (st2 = 0; s2[st2] != '\0'; st2++)
    {
    }
    p = (char *)malloc(((st1 + st2) + 1) * sizeof(char));

    if (p == NULL)
    {
        return (NULL);
    }
    else
    {
        for (i = 0; i <= st1 - 1; i++)
        {
            p[i] = s1[i];
        }
        for (i = 0; i <= st2; i++)
        {
            p[i + st1] = s2[i];
        }
        return (p);
    }
}
