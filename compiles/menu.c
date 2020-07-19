/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** menu
*/

#include "my.h"

void rules(my_t *run)
{
    sfRenderWindow_drawSprite(run->window, run->rules_sprite, NULL);
}

void help(my_t *run)
{
    sfRenderWindow_drawSprite(run->window, run->help_sprite, NULL);
}

void options(my_t *run)
{
    sfRenderWindow_drawSprite(run->window, run->options_sprite, NULL);
}

void menu(my_t *run)
{
    run->mouse_position = sfMouse_getPositionRenderWindow(run->window);
    sfRenderWindow_setMouseCursorVisible(run->window, sfTrue);
    sfRenderWindow_drawSprite(run->window, run->menu_sprite, sfFalse);
    button_conditions(run);
    sfRenderWindow_drawSprite(run->window, run->play_button_sprite, sfFalse);
    sfRenderWindow_drawSprite(run->window, run->options_button_sprite,
    sfFalse);
    sfRenderWindow_drawSprite(run->window, run->help_button_sprite, sfFalse);
    sfRenderWindow_drawSprite(run->window, run->rules_button_sprite, sfFalse);
}