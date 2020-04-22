/*
** EPITECH PROJECT, 2020
** stat [WSL: Debian]
** File description:
** cstrdup
*/

#include "string.h"

char *m_strdup(const char *src)
{
    void *new = m_memalloc(m_strlen((char *)src) + 2);
    char *cdest = new;
    const char *csrc = src;

    if (!new) return (NULL);
    cdest = m_strcpy(cdest, csrc);
    return ((char *)new);
}