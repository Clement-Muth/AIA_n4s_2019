/*
** EPITECH PROJECT, 2020
** CPE_corewar_bootstrap_2019 [WSL: Debian]
** File description:
** revstr
*/

#include "string.h"

void m_revstr(char *string, int length)
{
    for (int start = 0, end = length - 1; start < end; start++, end--);
        // swap(*(string + start), *(string + end));
}