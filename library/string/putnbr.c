/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** putnbr
*/

#include "string.h"

void m_putnbr(int number, const int fd)
{
    if (0 > number) {
        m_putchar('-', fd);
        number = -number;
    }
    if (10 <= number) {
        m_putnbr(number / 10, fd);
        m_putchar(number % 10 + '0', fd);
    }
    if (10 > number) m_putchar(number % 10 + '0', fd);
}