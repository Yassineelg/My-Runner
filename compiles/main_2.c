/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** main_2
*/

#include "my.h"

void parameter(my_t *run, int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'i') {
        run->t_i = 1;
    } else
        max_score(run, av);
}