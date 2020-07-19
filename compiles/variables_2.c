/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** variables_2
*/

#include "my.h"

void reset_variable(my_t *run)
{
    run->score = 0;
    run->barrel_speed = 2;
    run->x = 1;
    run->barrel_position.y = 760;
    run->barrel_position.x = 2000;
    run->player_position.y = 759;
    run->player_position.x = 0;
    sfSprite_setTexture(run->barrel_sprite, run->barrel_moving, sfFalse);
    sfSprite_setTexture(run->player_sprite, run->player_walking, sfFalse);
}

void variable_affectation_6(my_t *run)
{
    sfVideoMode resolution = {1920, 1080, 144};

    run->window = sfRenderWindow_create(resolution, "My Runner",
    sfResize | sfClose, NULL);
    run->rules = sfTexture_createFromFile("Rules.png", NULL);
    run->rules_sprite = sfSprite_create();
}