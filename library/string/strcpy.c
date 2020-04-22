/*
** EPITECH PROJECT, 2020
** stat [WSL: Debian]
** File description:
** cstrcpy
*/

#include "string.h"

char *m_strcpy(char *restrict dest, const char *restrict src)
{
    return (m_memcpy(dest, src, m_strlen((char *)src) + 1));
}