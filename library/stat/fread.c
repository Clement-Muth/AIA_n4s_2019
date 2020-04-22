/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** fread
*/

#include "stat.h"

bool m_fread(const char *restrict filepath)
{
    stat_t *statf = m_stat(filepath, DEFAULT, complet);

    if (!statf) return (false);
    for (int i = 0; statf->content[i]; i++) m_putstr(statf->content[i], 1);
    stat_free(statf);
    return (true);
}