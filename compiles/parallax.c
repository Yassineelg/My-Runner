/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** parallax
*/

#include "my.h"

void parallax_2(my_t *run)
{
    sfRenderWindow_drawSprite(run->window, run->background_2_sprite, NULL);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(run->clock_background_2))
    > 10) {
        run->rect_backgrond_2.left += 3;
        if (run->rect_backgrond_2.left >= 1920)
            run->rect_backgrond_2.left = 0;
        sfSprite_setTextureRect(run->background_2_sprite,
        run->rect_backgrond_2);
        sfClock_restart(run->clock_background_2);
    }
    sfRenderWindow_drawSprite(run->window, run->background_1_sprite, NULL);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(run->clock_background_1))
    > 10) {
        run->rect_backgrond_1.left += 10;
        if (run->rect_backgrond_1.left >= 1920)
            run->rect_backgrond_1.left = 0;
        sfSprite_setTextureRect(run->background_1_sprite,
        run->rect_backgrond_1);
        sfClock_restart(run->clock_background_1);
    }
}

void parallax(my_t *run)
{
    sfRenderWindow_drawSprite(run->window, run->background_4_sprite, NULL);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(run->clock_background_4))
    > 10) {
        run->rect_backgrond_4.left += 1;
        if (run->rect_backgrond_4.left >= 1920)
            run->rect_backgrond_4.left = 0;
        sfSprite_setTextureRect(run->background_4_sprite,
        run->rect_backgrond_4);
        sfClock_restart(run->clock_background_4);
    }
    sfRenderWindow_drawSprite(run->window, run->background_3_sprite, NULL);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(run->clock_background_3))
    > 100) {
        run->rect_backgrond_3.left += 1;
        if (run->rect_backgrond_3.left >= 1920)
            run->rect_backgrond_3.left = 0;
        sfSprite_setTextureRect(run->background_3_sprite,
        run->rect_backgrond_3);
        sfClock_restart(run->clock_background_3);
    }
}