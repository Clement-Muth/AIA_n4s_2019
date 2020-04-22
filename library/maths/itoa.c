/*
** EPITECH PROJECT, 2020
** CPE_corewar_bootstrap_2019 [WSL: Debian]
** File description:
** _itoa
*/

#include "maths.h"

static bool check(int number, bool neg, int i, char *string)
{
    if (number == 0) {
        string[i++] = '0';
        string[i] = '\0';
        return (false);
    }
    if (number < 0) {
        neg = true;
        number = -number;
    }
    return (true);
}

char *m_itoa(int number)
{
    int i = 0;
    int rem = 0;
    int base = 10;
    bool neg = false;
    char *string = NULL;

    if (!check(number, neg, i, string)) return (string);
    while (number != 0) {
        rem = number % base;
        string[i++] = (rem > 9)? (rem - 10) + 'a' : rem + '0';
        number = number/base;
    }
    if (neg) string[i++] = '-';
    string[i] = '\0';
    m_revstr(string, i);
    return string;
}
