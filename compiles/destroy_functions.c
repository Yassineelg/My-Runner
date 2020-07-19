/*
** EPITECH PROJECT, 2020
** destroy_functions
** File description:
** destroy_functions
*/

#include "my.h"

void destroy_function_4(my_t *run)
{
    sfMusic_destroy(run->menu_zik);
    sfMusic_destroy(run->game_zik);
    sfMusic_destroy(run->lose_zik);
    sfMusic_destroy(run->die_zik);
    sfMusic_destroy(run->barrel_zik);
    sfMusic_destroy(run->jump_zik);
    free(run);
}

void destroy_function_3(my_t *run)
{
    sfTexture_destroy(run->background_4);
    sfSprite_destroy(run->barrel_sprite);
    sfSprite_destroy(run->player_sprite);
    sfSprite_destroy(run->menu_sprite);
    sfSprite_destroy(run->play_button_sprite);
    sfSprite_destroy(run->options_button_sprite);
    sfSprite_destroy(run->help_button_sprite);
    sfSprite_destroy(run->rules_button_sprite);
    sfSprite_destroy(run->options_sprite);
    sfSprite_destroy(run->help_sprite);
    sfSprite_destroy(run->rules_sprite);
    sfSprite_destroy(run->lose_sprite);
    sfSprite_destroy(run->background_1_sprite);
    sfSprite_destroy(run->background_2_sprite);
    sfSprite_destroy(run->background_3_sprite);
    sfSprite_destroy(run->background_4_sprite);
    destroy_function_4(run);
}

void destroy_function_2(my_t *run)
{
    sfTexture_destroy(run->player_dying);
    sfTexture_destroy(run->menu);
    sfTexture_destroy(run->play_button_pushed);
    sfTexture_destroy(run->play_button_normal);
    sfTexture_destroy(run->options_button_pushed);
    sfTexture_destroy(run->options_button_normal);
    sfTexture_destroy(run->help_button_pushed);
    sfTexture_destroy(run->help_button_normal);
    sfTexture_destroy(run->rules_button_pushed);
    sfTexture_destroy(run->rules_button_normal);
    sfTexture_destroy(run->options);
    sfTexture_destroy(run->help);
    sfTexture_destroy(run->rules);
    sfTexture_destroy(run->lose_equal);
    sfTexture_destroy(run->lose_loser);
    sfTexture_destroy(run->lose_win);
    sfTexture_destroy(run->background_1);
    sfTexture_destroy(run->background_2);
    sfTexture_destroy(run->background_3);
    destroy_function_3(run);
}

void destroy_function(my_t *run)
{
    sfClock_destroy(run->clock_end);
    sfClock_destroy(run->clock_score);
    sfClock_destroy(run->clock_barrel);
    sfClock_destroy(run->clock_player_walking);
    sfClock_destroy(run->clock_player_jumping);
    sfClock_destroy(run->clock_player_running);
    sfClock_destroy(run->clock_player_dying);
    sfClock_destroy(run->clock_background_1);
    sfClock_destroy(run->clock_background_2);
    sfClock_destroy(run->clock_background_3);
    sfClock_destroy(run->clock_background_4);
    sfText_destroy(run->txt_highest_score);
    sfText_destroy(run->txt_score);
    sfFont_destroy(run->font);
    sfTexture_destroy(run->barrel_moving);
    sfTexture_destroy(run->barrel_destroy);
    sfTexture_destroy(run->player_walking);
    sfTexture_destroy(run->player_jumping);
    sfTexture_destroy(run->player_running);
    destroy_function_2(run);
}