/*
** EPITECH PROJECT, 2023
** swapupcase
** File description:
** main
*/

#include <stdio.h>
#include "swapupcase.h"

int main(const int ac, char **av)
{
    int c=0;
    if (ac != 2 || av == NULL || av[1] == NULL)
        return EPITECH_KO;
    int a= 0;
    int b = 4;
    return swapupcase(av[1]);
}
