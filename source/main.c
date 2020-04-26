/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** main
*/

#include "needs.h"

static void start_sim(void)
{
    
}

int main(void)
{
    float speed = 1;
    char buffer[600];
    size_t size = 0;
    char reponse[600];
    /*stat_t *statf = m_stat(".fifo_n4s", DEFAULT, complet);

    for (int i = 0; statf->content[i]; i++)
        m_putstr(statf->content[i], 2);
    */start_sim();
    read(0, reponse, 500);
    m_putstr(reponse, 2);
    /*m_putstr("test\n", 2);
    while (1) {
        m_putstr("hello", 2);
        printf("%s:%f\n", commands[forward], speed);
        read(0, reponse, 500);
        m_putstr(reponse, 2);
        //printf("%s:0.5\n", commands[w_dir]);
        //m_putstr(buffer, 2);
    }*/
    return (0);
}
