/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace) [WSL: Debian]
** File description:
** strndup
*/

#include "string.h"

char *m_strndup(const char *str, int n)
{
    char *ret;
    char *tmp;
    int i = 0;

    if (!(str))
        return (NULL);
    ret = malloc(n + 1);
    tmp = ret;
    if (ret == NULL)
        return (NULL);
    while (*str && i++ < n) {
        *tmp = *str++;
        ++tmp;
    }
    *tmp = '\0';
    return (ret);
}