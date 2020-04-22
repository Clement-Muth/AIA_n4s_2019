/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** openf_function
*/

#ifndef OPENF_FUNCTION_H_
#define OPENF_FUNCTION_H_

stat_t *m_stat(const char *__restrict__ filepath, size_t nread, type info);
void stat_free(stat_t *statf);
stat_t *init_stat(stat_t *statf, const char *filepath, size_t nread,
type info);

FILE *m_fopen(const char *__restrict__ filepath);

bool m_fread(const char *__restrict__ filepath);

#endif /* !OPENF_FUNCTION_H_ */