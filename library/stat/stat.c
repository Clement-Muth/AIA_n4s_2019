/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** stat
*/

#include "stat.h"

static char *get_name(const char *restrict filepath)
{
    char *name = NULL;
    int begin_name = 0;

    for (begin_name = m_strlen((char *)filepath); PREG_MATCH; begin_name--);
    name = m_memalloc(m_strlen((char *)filepath) - begin_name);
    for (int i = 0; filepath[begin_name]; i++, begin_name++)
        name[i] = filepath[begin_name];
    return (name);

}

static bool count_line(stat_t *statf)
{
    if (!(FINFO.stream = m_fopen(statf->filepath))) return (false);
    while (-1 != getline(&FINFO.lineptr, &FINFO.nread, FINFO.stream))
        ++statf->nline;
    return (fclose(FINFO.stream) == EXIT_SUCCESS) ? (true) : (false);
}

static bool fill_info(stat_t *statf, type info)
{
    if (!(count_line(statf))) return (false);
    if (!(FINFO.stream = m_fopen(statf->filepath))) return (false);
    if (complet == info) {
        statf->content = malloc(S_ARRAY * (statf->nline + 1));
        statf->content[statf->nline] = NULL;
        for (int i = 0; statf->nline != i; i++) {
            statf->content[i] = m_memalloc(100);
            getline(&statf->content[i], &FINFO.nread, FINFO.stream);
        }
    }
    statf->name = get_name(statf->filepath);
    return (fclose(FINFO.stream) == EXIT_SUCCESS) ? (true) : (false);
}

stat_t *m_stat(const char *restrict filepath, size_t nread, type info)
{
    stat_t *statf = NULL;

    statf = init_stat(statf, filepath, nread, info);
    if (!fill_info(statf, info)) return (NULL);
    return (statf);
}