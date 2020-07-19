/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** menu2
*/

#include "my.h"

void button_conditions_2(my_t *run)
{
    if (run->status == 0 && run->mouse_position.x >= 178 &&
    run->mouse_position.x <= 387 && run->mouse_position.y >= 651 &&
    run->mouse_position.y <= 739)
        sfSprite_setTexture(run->help_button_sprite, run->help_button_pushed,
        sfFalse);
    else
        sfSprite_setTexture(run->help_button_sprite, run->help_button_normal,
        sfFalse);
    if (run->status == 0 && run->mouse_position.x >= 177 &&
    run->mouse_position.x <= 494 && run->mouse_position.y >= 771 &&
    run->mouse_position.y <= 838)
        sfSprite_setTexture(run->options_button_sprite,
        run->options_button_pushed, sfFalse);
    else
        sfSprite_setTexture(run->options_button_sprite,
        run->options_button_normal, sfFalse);
}

void button_conditions(my_t *run)
{
    if (run->status == 0 && run->mouse_position.x >= 1168 &&
    run->mouse_position.x <= 1825 && run->mouse_position.y >= 562 &&
    run->mouse_position.y <= 776) {
        sfSprite_setTexture(run->play_button_sprite,
        run->play_button_normal, sfFalse);
    } else
        sfSprite_setTexture(run->play_button_sprite, run->play_button_pushed,
        sfFalse);
    if (run->status == 0 && run->mouse_position.x >= 179 &&
    run->mouse_position.x <= 428 && run->mouse_position.y >= 520 &&
    run->mouse_position.y <= 608) {
        sfSprite_setTexture(run->rules_button_sprite, run->rules_button_pushed,
        sfFalse);
    } else
        sfSprite_setTexture(run->rules_button_sprite, run->rules_button_normal,
        sfFalse);
    button_conditions_2(run);
}