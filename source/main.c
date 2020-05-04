/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** main
*/

#include "needs.h"

char **parsing_handling_reponse(char *reponse, int type)
{
    char **parse_reponse = parse(reponse, ':');

    if (!parse_reponse) return (NULL);
    m_printt("%s", parse_reponse, 2, true);
    if (type == 2)
        for (int i = 0; i < 32; ++i)
            if (atof(parse_reponse[i + 3]) == 0)
                return (NULL);
    return ((m_strcmp(parse_reponse[1], "OK") ? (parse_reponse) : NULL));
}

void print_msg(char const *msg)
{
    my_printf(1, "%s\n", msg);
}

int main(void)
{
    float speed = 1;
    char buffer[600];
    size_t size = 0;
    char *reponse = NULL;

    print_msg(commands[start]);
    getline(&reponse, &size, stdin);
    m_putstr(reponse, 2);
    //my_printf(2, "%f\n", 1);
    while (1) {
        my_printf(1,"%s:%d\n", commands[forward], 1);
        getline(&reponse, &size, stdin);
        if (!parsing_handling_reponse(reponse, 1)) break;
        my_printf(1, "%s\n", commands[get_inf]);
        getline(&reponse, &size, stdin);
        if (!parsing_handling_reponse(reponse, 2)) break;
    }
    my_printf(1, commands[stop]);
    return (0);
}
