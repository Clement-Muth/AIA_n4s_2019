/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019 [WSL: Debian]
** File description:
** maths_function
*/

#ifndef MATHS_FUNCTION_H_
#define MATHS_FUNCTION_H_

int m_atoi(const char *string);

char *m_itoa(int number);

int m_pow(int nb , int p);

int m_sqrt(int nb);

int dist_roth(vector2i a, vector2i b);

bool preg_match(const char *__restrict__ pattern,
const char *__restrict__ subject);

#endif /* !MATHS_FUNCTION_H_ */