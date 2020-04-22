/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** _strncpy
*/

#include "string.h"

char *m_strncpy(const char *src, const char n)
{
    int length = m_strlen((char *)src);
    char *dest = m_memalloc(length);

    for (int i = 0; src[i] && n != src[i]; i++) dest[i] = src[i];
    return (dest);
}