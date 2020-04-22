/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019 [WSL: Debian]
** File description:
** sqrt
*/

#include "maths.h"

int m_sqrt(int nb)
{
    int i;

    if (nb < 0) return (0);
    for (i = 0; (i * i) != nb; i++)
        if ((i * i) > nb) return (0);
    return (i);
}