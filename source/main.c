/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** main
*/

#include "needs.h"

static void start_sim(void)
{
    printf("%s\n", commands[start]);
}

int main(void)
{
    float speed = 1;

    start_sim();
    while (1)
        printf("%s:%f\n", commands[forward], speed);
    return (0);
}
