/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace) [WSL: Debian]
** File description:
** strncpy
*/

#include "string.h"

char *m_strncpy(const char *src, const int length)
{
    char *dest = m_memalloc(length);

    for (int i = 0; i != length; i++) dest[i] = src[i];
    return (dest);
}