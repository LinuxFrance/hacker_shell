/*
** PROJECT, 2023
** mylib
** File description:
** my_putchar.c
*/

#include "library.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
