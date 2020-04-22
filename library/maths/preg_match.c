/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** _preg_match
*/

#include "maths.h"

static bool matches(const char *restrict pattern, const char subjetc)
{
    for (int i = 0; pattern[i]; i++)
        if (subjetc == pattern[i]) return (true);
    return (false);
}

bool preg_match(const char *restrict pattern, const char *restrict subject)
{
    for (int i = 0; subject[i]; i++)
        if (!matches(pattern, subject[i])) return (false);
    return (true);
}