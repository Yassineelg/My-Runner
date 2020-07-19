/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main of runner
*/

#include "my.h"

void opened_window(my_t *run)
{
    events(run);
    sfRenderWindow_display(run->window);
    sfRenderWindow_clear(run->window, sfBlack);
    if (run->status == 0)
        menu(run);
    if (run->status == 1)
        game(run);
    if (run->status == 3)
        end(run);
    if (run->status == 4)
        rules(run);
    if (run->status == 5)
        help(run);
    if (run->status == 6)
        options(run);
}

void high_score_setup(my_t *run)
{
    FILE *fp;

    run->highest_score_str = malloc(sizeof(char) * 4);
    fp = fopen("highest_score", "r");
    fread(run->highest_score_str, 1, 3, fp);
    run->highest_score = my_getnbr(run->highest_score_str);
    fclose(fp);
}

void high_score_save(my_t *run)
{
    FILE *fp;

    if (run->score == 0)
        high_score_setup(run);
    fp = fopen("highest_score", "w");
    fwrite(my_rev_putnbr(run->highest_score), 1,
    my_strlen(my_rev_putnbr(run->highest_score)), fp);
    fclose(fp);
}

int max_score(my_t *run, char **av)
{
    int fd;
    int size;
    char buffer[4096];

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (84);
    size = read(fd, buffer, 4096);
    if (size <= 0)
        return (84);
    run->max_score = my_getnbr(buffer);
    return (0);
}

int main(int ac, char **av)
{
    my_t *run = malloc(sizeof(my_t));
    char buffer[484];
    int fd;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        fd = open("tiret_h", O_RDONLY);
        read(fd, buffer, 484);
        write(1, buffer, 484);
        return (0);
    }
    parameter(run, ac, av);
    if (max_score(run, av) == 84 && run->t_i == 0)
        return (84);
    variable_affectation(run);
    setup(run);
    while (sfRenderWindow_isOpen(run->window))
        opened_window(run);
    destroy_function(run);
    high_score_save(run);
    return (0);
}