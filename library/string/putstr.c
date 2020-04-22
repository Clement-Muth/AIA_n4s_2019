/*
** EPITECH PROJECT, 2020
** CPE_dante_2019 [WSL: Debian]
** File description:
** cputstr
*/

#include "string.h"

void
m_putstr(const char *restrict string, const int fd)
{
    do
        m_putchar(*string, fd);
    while (*string++);
}