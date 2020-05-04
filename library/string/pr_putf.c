/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** pr_putf
*/

#include <stdarg.h>
#include "string.h"

static int nbrlen(int nb)
{
    int ret = 0;

    while (nb) {
        nb /= 10;
        ++ret;
    }
    return (ret);
}

static int pr_pow(int nb, int pow)
{
    int ret = 1;

    while (--pow) {
        ret *= nb;
    }
    return (ret);
}

int pr_putf(int fd, va_list list)
{
    double nb = va_arg(list, double);
    int len = nbrlen(nb);
    int divide = (pr_pow(10, len));
    int prec = 7;

    if (nb < 0)
        m_putchar('-', fd);
    while (divide) {
        m_putchar(((int)(nb / divide) % 10) + 48, fd);
        divide /= 10;
    }
    if (prec) {
        m_putchar('.', fd);
        while (--prec) {
            nb *= 10.0;
            m_putchar(((int)nb % 10) + 48, fd);
        }
    }
    return (0);
}