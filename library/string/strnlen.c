/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** _strnlen
*/

#include "string.h"

size_t m_strnlen(const char *restrict string, const char end)
{
    size_t i = 0;

    for (size_t n = 0; string[n]; n++)
        if (end == string[i]) break;
    return (i);
}