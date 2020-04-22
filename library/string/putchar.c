/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "string.h"

void m_putchar(const char character, const int fd)
{
    write(fd, &character, 1);
}