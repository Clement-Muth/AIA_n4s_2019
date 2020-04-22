/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019 [WSL: Debian]
** File description:
** dist_roth
*/

#include "maths.h"

int dist_roth(vector2i a, vector2i b)
{
    int x = m_pow(b.x - a.x, 2);
    int y = m_pow(b.y - a.y, 2);

    return (m_sqrt(x + y));
}