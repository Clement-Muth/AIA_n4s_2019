/*
** EPITECH PROJECT, 2020
** stat [WSL: Debian]
** File description:
** fopen
*/

#include "stat.h"

FILE *m_fopen(const char *restrict filepath)
{
    FILE *stream = NULL;

    if (!(stream = fopen(filepath, "r"))) {
        m_putstr("failed to load file. Check the filepath\n", 2);
        return (NULL);
    }
    return (stream);
}