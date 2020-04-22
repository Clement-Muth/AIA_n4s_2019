/*
** EPITECH PROJECT, 2020
** stat [WSL: Debian]
** File description:
** stat_free
*/

#include "stat.h"

void stat_free(stat_t *statf)
{
    free(statf->filepath);
    free(statf->name);
    free(FINFO.lineptr);
    if (complet == FINFO.info) {
        for (int i = 0; statf->content[i]; i++) free(statf->content[i]);
        free(statf->content);
    }
    free(statf);
}