/*
** PROJECT, 2023
** mylib
** File description:
** my_put_nbr.c
*/

#include "library.h"

int my_put_nbr(int nb1)
{
    int nb2 = 0;


    if (nb1 < 0) {
        my_putchar('-');
        nb1 = nb1 *(-1);
    }
    if (nb1 >= 10) {
        nb2 = nb1 % 10;
        nb1 = nb1 / 10;
        my_put_nbr(nb1);
        my_putchar(nb2 + '0');
    }else {
        my_putchar(nb1 + '0');
    }
    return 0;
}
