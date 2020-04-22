/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** main
*/

#include "needs.h"

static bool (*process[])(void *t) =
{
    // init,
    // error_handling,
    // vm_core,
};

static bool needs(const int ac, char *const restrict *const restrict av)
{
    for (int i = 0; process[i]; i++)
        if (!process[i](NULL)) return (false);
    return (true);
}

int main(const int ac, char *const restrict *const restrict av)
{
    return (needs(ac, av)) ? (0) : (84);
}