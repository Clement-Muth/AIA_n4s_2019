/*
** EPITECH PROJECT, 2020
** CPE_dante_2019 [WSL: Debian]
** File description:
** string_function
*/

#ifndef STRING_FUNCTION_H_
#define STRING_FUNCTION_H_

bool m_strcmp(const char *__restrict__ comparing, const char *__restrict__
compared);

void m_putchar(const char character, const int fd);

void m_putstr(const char *__restrict__ string, const int fd);

void m_putnbr(int number, const int fd);

void m_printt(const char *restrict format, const void *array, int fd,
bool jump);

size_t m_strlen(char *__restrict__ string);

size_t m_strnlen(const char *__restrict__ string, const char end);

char *m_memalloc(size_t memsize);

void *m_memcpy(void *__restrict__ dest, const void *__restrict__ src, size_t
length);

void m_revstr(char *string, int length);

char *m_strdup(const char *src);

char *m_strndup(const char *src, int length);

char *m_strcpy(char *__restrict__ dest, const char *__restrict__ src);

char *m_strnccpy(const char *src, const char n);

char *m_strncpy(const char *src, const int length);

char *m_strnlcpy(const char *__restrict__ src, const char beg, char end);

char *m_stricpy(const char *__restrict__ src, const char ign);

int my_printf(int fd, char const *format, ...);

int pr_putf(int fd, va_list list);

char **parse(char *str, char sep);

#endif /* !STRING_FUNCTION_H_ */