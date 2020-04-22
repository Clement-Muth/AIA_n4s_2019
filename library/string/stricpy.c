/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** _strrmcpy
*/

#include "string.h"

static int m_strilen(const char *restrict string, const char ignore)
{
    size_t i = 0;

    for (size_t n = 0; string[n]; n++)
        if (ignore != string[i]) i++;
    return (i);
}

char *m_stricpy(const char *restrict src, const char ign)
{
    size_t length = m_strilen(src, ign);
    char *dest = m_memalloc(length);

    if (!dest) return (NULL);
    for (int i = 0, n = 0; length >= n; i++, n++) {
        if (src[n] == ign) n++;
        if (!src[n]) return (dest);
        dest[i] = src[n];
    }
    return (dest);
}