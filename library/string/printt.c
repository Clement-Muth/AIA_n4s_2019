/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** printt
*/

#include "string.h"

void print_string(char **array, int fd, bool jump)
{
    for (int i = 0; array[i]; i++) {
        m_putstr(array[i], fd);
        if (jump) m_putchar('\n', fd);
    }
}

void printt_number(int *array, int fd)
{
    for (int i = 0; array[i]; i++)
        m_putnbr(array[i], fd);
}

void m_printt(const char *restrict format, const void *array, int fd, bool jump)
{
    if (!array) return;
    if (m_strcmp(format, "%s")) print_string((char **)array, fd, jump);
    else if (m_strcmp(format, "%d")) printt_number((int *)array, fd);
}