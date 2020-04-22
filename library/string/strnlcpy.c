/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** _strnlcpy
*/

#include "string.h"

int m_strllen(const char *restrict string, const char beg)
{
    int i = 0;

    while (beg != string[i]) i++;
    return (i + 1);
}

char *m_strnlcpy(const char *restrict src, const char beg, char end)
{
    int n = 0;
    char *dest = m_memalloc(m_strlen((char *)src));
    char *csrc = m_memalloc(m_strlen((char *)src) - m_strllen(src, beg));

    if (!dest || !csrc) return (NULL);
    for (int i = m_strllen(src, beg); src[i]; i++, n++) csrc[n] = src[i];
    return (m_memcpy(dest, csrc, m_strlen((char *)csrc) + 1));
}