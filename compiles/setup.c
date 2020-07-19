/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** setup
*/

#include "my.h"

void setup_2(my_t *run)
{
    sfSprite_setTextureRect(run->background_3_sprite, run->rect_backgrond_3);
    sfSprite_setTextureRect(run->background_4_sprite, run->rect_backgrond_4);
    sfText_setFont(run->txt_highest_score, run->font);
    sfText_setFont(run->txt_score, run->font);
    sfText_setCharacterSize(run->txt_highest_score, 100);
    sfText_setCharacterSize(run->txt_score, 100);
    sfText_setColor(run->txt_highest_score, sfWhite);
    sfText_setColor(run->txt_score, sfWhite);
    sfText_setPosition(run->txt_highest_score, run->position_highest_score);
    sfText_setPosition(run->txt_score, run->position_score);
    sfRenderWindow_setFramerateLimit(run->window, 144);
    sfMusic_play(run->menu_zik);
    sfMusic_getLoop (run->menu_zik);
    sfMusic_setVolume(run->game_zik, 10);
    sfMusic_setVolume(run->die_zik, 50);
    sfMusic_setVolume(run->barrel_zik, 50);
    sfMusic_setVolume(run->lose_zik, 50);
    sfMusic_setVolume(run->jump_zik, 10);
}

void setup(my_t *run)
{
    high_score_setup(run);
    sfSprite_setTexture(run->menu_sprite, run->menu, sfFalse);
    sfSprite_setTexture(run->options_button_sprite, run->options_button_normal,
    sfFalse);
    sfSprite_setTexture(run->help_button_sprite, run->help_button_normal,
    sfFalse);
    sfSprite_setTexture(run->rules_button_sprite, run->rules_button_normal,
    sfFalse);
    sfSprite_setTexture(run->options_sprite, run->options, sfFalse);
    sfSprite_setTexture(run->help_sprite, run->help, sfFalse);
    sfSprite_setTexture(run->rules_sprite, run->rules, sfFalse);
    sfSprite_setTexture(run->background_1_sprite, run->background_1, sfFalse);
    sfSprite_setTexture(run->background_2_sprite, run->background_2, sfFalse);
    sfSprite_setTexture(run->background_3_sprite, run->background_3, sfFalse);
    sfSprite_setTexture(run->background_4_sprite, run->background_4, sfFalse);
    sfSprite_setTextureRect(run->barrel_sprite, run->rect_barrel);
    sfSprite_setTextureRect(run->player_sprite, run->rect_player_walking);
    sfSprite_setTextureRect(run->background_1_sprite, run->rect_backgrond_1);
    sfSprite_setTextureRect(run->background_2_sprite, run->rect_backgrond_2);
    setup_2(run);
}