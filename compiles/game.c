/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** game
*/

#include "my.h"

void animation_die(my_t *run)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(run->clock_player_dying))
    > 50) {
        if (run->rect_player_dying.left != 332)
            run->rect_player_dying.left += 83;
        sfSprite_setTextureRect(run->player_sprite, run->rect_player_dying);
        sfClock_restart(run->clock_player_dying);
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(run->clock_barrel)) > 50)
    {
        if (run->rect_barrel.left != 384)
            run->rect_barrel.left += 96;
        sfSprite_setTextureRect(run->barrel_sprite, run->rect_barrel);
        sfClock_restart(run->clock_barrel);
    }
}

void hit_by_the_barrel(my_t *run)
{
    while (sfTime_asSeconds(sfClock_getElapsedTime(run->clock_end)) < 1.5) {
        sfRenderWindow_display(run->window);
        sfRenderWindow_clear(run->window, sfBlack);
        sfRenderWindow_drawSprite(run->window, run->background_4_sprite, NULL);
        sfRenderWindow_drawSprite(run->window, run->background_3_sprite, NULL);
        sfRenderWindow_drawSprite(run->window, run->background_2_sprite, NULL);
        sfRenderWindow_drawSprite(run->window, run->background_1_sprite, NULL);
        sfRenderWindow_drawText(run->window, run->txt_score, NULL);
        sfRenderWindow_drawSprite(run->window, run->player_sprite, NULL);
        sfRenderWindow_drawSprite(run->window, run->barrel_sprite, NULL);
        animation_die(run);
    }
}

void game(my_t *run)
{
    sfText_setPosition(run->txt_score, run->position_score);
    sfRenderWindow_setMouseCursorVisible(run->window, sfFalse);
    parallax(run);
    parallax_2(run);
    sfRenderWindow_drawText(run->window, run->txt_score, NULL);
    sfText_setString(run->txt_score, my_rev_putnbr(run->score));
    game_conditions(run);
    run->barrel_position.x -= run->barrel_speed;
    sfSprite_setPosition(run->barrel_sprite, run->barrel_position);
    sfRenderWindow_drawSprite(run->window, run->barrel_sprite, NULL);
}