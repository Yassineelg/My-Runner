/*
** EPITECH PROJECT, 2020
** player_animation.c
** File description:
** player animation
*/

#include "my.h"

void walk_animation(my_t *run)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (run->clock_player_walking)) > 80 * run->x) {
        run->rect_player_walking.left += 59;
        if (run->rect_player_walking.left >= 472)
            run->rect_player_walking.left = 0;
        if (!run->jump)
            sfSprite_setTextureRect(run->player_sprite,
            run->rect_player_walking);
        sfClock_restart(run->clock_player_walking);
    }
}

void jump_animation(my_t *run)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (run->clock_player_jumping)) > 100) {
        run->rect_player_jumping.left += 48;
        if (run->rect_player_jumping.left >= 192)
            run->rect_player_jumping.left = 0;
        sfClock_restart(run->clock_player_jumping);
    }
}

void run_animation(my_t *run)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (run->clock_player_running)) > 40) {
        run->rect_player_running.left += 60;
        if (run->rect_player_running.left >= 480)
            run->rect_player_running.left = 0;
        sfClock_restart(run->clock_player_running);
    }
}

void barrel_animation(my_t *run)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (run->clock_barrel)) > 60) {
        run->rect_barrel.left += 96;
        if (run->rect_barrel.left >= 480)
            run->rect_barrel.left = 0;
        sfSprite_setTextureRect(run->barrel_sprite, run->rect_barrel);
        sfClock_restart(run->clock_barrel);
    }
}

void player_animation(my_t *run)
{
    sfSprite_setPosition(run->player_sprite, run->player_position);
    sfRenderWindow_drawSprite(run->window, run->player_sprite, NULL);
    walk_animation(run);
    jump_animation(run);
    run_animation(run);
    barrel_animation(run);
}