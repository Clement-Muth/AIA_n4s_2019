/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** printt
*/

#include "string.h"

void print_string(char **array, bool jump)
{
    for (int i = 0; array[i]; i++) {
        m_putstr(array[i], 1);
        if (jump) m_putchar('\n', 1);
    }
}

void printt_number(int *array)
{
    for (int i = 0; array[i]; i++)
        m_putnbr(array[i], 1);
}

void m_printt(const char *restrict format, const void *array, bool jump)
{
    if (m_strcmp(format, "%s")) print_string((char **)array, jump);
    else if (m_strcmp(format, "%d")) printt_number((int *)array);
}