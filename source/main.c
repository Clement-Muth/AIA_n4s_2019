/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** main
*/

#include "needs.h"

static bool needs(void)
{
    return ((!process()) ? (false) : (true));
}

int main(void)
{
    return (!(needs()) ? (84) : (0));
}