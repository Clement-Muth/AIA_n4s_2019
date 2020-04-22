/*
** EPITECH PROJECT, 2020
** stat [WSL: Debian]
** File description:
** _memcpy
*/

#include "string.h"

void *m_memcpy(void *restrict dest, const void *restrict src, size_t length)
{
    char *cdest = dest;
    const char *csrc = src;

    while (length--) *cdest++ = *csrc++;
    return (dest);
}