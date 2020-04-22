/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** openf_struct
*/

#ifndef OPENF_STRUCT_H_
#define OPENF_STRUCT_H_

typedef enum type_completion {minimal = 0, partial = 1, complet = 2} type_t;

typedef int type;

typedef struct file_info_s
{
    char *lineptr;
    size_t nline;
    size_t nread;
    FILE *stream;
    type info;
} file_info_t;


typedef struct stat_s
{
    file_info_t file_info;
    char **content;
    char *filepath;
    char *name;
    size_t *length;
    size_t nline;
} stat_t;

#endif /* !OPENF_STRUCT_H_ */