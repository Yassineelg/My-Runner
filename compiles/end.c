/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** end
*/

#include "my.h"

void end(my_t *run)
{
    sfText_setPosition(run->txt_score, run->position_highest_score);
    sfRenderWindow_drawSprite(run->window, run->lose_sprite, NULL);
    sfRenderWindow_drawText(run->window, run->txt_score, NULL);
    sfRenderWindow_setMouseCursorVisible(run->window, sfTrue);
}