/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** memalloc
*/

#include "string.h"
#include "string_struct.h"

static void init_string(char *memptr, size_t memsize)
{
    while (memsize--) memptr[memsize] = '\0';
}

char *m_memalloc(size_t memsize)
{
    char *memptr = NULL;

    if (!(memptr = malloc(sizeof(char *) * memsize + 1))) return (NULL);
    else init_string(memptr, memsize + 2);
    return (memptr);
}