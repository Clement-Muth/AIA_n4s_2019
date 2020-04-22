/*
** EPITECH PROJECT, 2020
** CPE_dante_2019 [WSL: Debian]
** File description:
** _atoi
*/

#include "maths.h"

int m_atoi(const char *string)
{
    int sign = 1;
    int base = 0;
    int i = 0;

    for (i = 0; string[i] == ' '; i++);
    if (string[i] == '-' || string[i] == '+')
        sign = 1 - 2 * (string[i++] == '-');
    while (string[i] >= '0' && string[i] <= '9') {
        if (base > INT_MAX / 10 ||
        (base == INT_MAX / 10 && string[i] - 48 > 7))
            return (sign == 1) ? (INT_MAX) : (INT_MIN);
        base = 10 * base + (string[i++] - '0');
    }
    return (base * sign);
}