/*
** EPITECH PROJECT, 2020
** 110borwein_2019
** File description:
** assert
*/

#ifndef ASSERT_H_
#define ASSERT_H_

#include <stdbool.h>
#include "../../string/include/string.h"

#define m_assert(expr) ((expr) ? true : m_assert_fail(#expr, \
__FILE__, __LINE__, __func__))

/* Evalue the expr and return false if it's true */
bool m_assert_fail(char const *__restrict__ assertion, char const *__restrict__\
file, unsigned line, char const *__restrict__ function);

#endif /* !ASSERT_H_ */