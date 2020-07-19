/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** variables
*/

#include "my.h"

void variable_affectation_5(my_t *run)
{
    variable_affectation_6(run);
    run->lose_equal = sfTexture_createFromFile("lose_equal.png", NULL);
    run->lose_loser = sfTexture_createFromFile("lose_loser.png", NULL);
    run->lose_win = sfTexture_createFromFile("lose_win.png", NULL);
    run->lose_sprite = sfSprite_create();
    run->txt_highest_score = sfText_create();
    run->position_highest_score.x = 920;
    run->position_highest_score.y = 680;
    run->txt_score = sfText_create();
    run->position_score.x = 930;
    run->position_score.y = 0;
    run->font = sfFont_createFromFile("Pixellari.ttf");
    run->clock_score = sfClock_create();
    run->clock_end = sfClock_create();
    run->menu_zik = sfMusic_createFromFile("skyrim.ogg");
    run->game_zik = sfMusic_createFromFile("undertale.ogg");
    run->lose_zik = sfMusic_createFromFile("game_over.ogg");
    run->die_zik = sfMusic_createFromFile("die.ogg");
    run->barrel_zik = sfMusic_createFromFile("barrel.ogg");
    run->jump_zik = sfMusic_createFromFile("jump.ogg");
}

void variable_affectation_4(my_t *run)
{
    run->options_button_pushed = sfTexture_createFromFile("Options_pushed.png",
    NULL);
    run->options_button_normal = sfTexture_createFromFile("Options_normal.png",
    NULL);
    run->options_button_sprite = sfSprite_create();
    run->help_button_pushed = sfTexture_createFromFile("Help_pushed.png",
    NULL);
    run->help_button_normal = sfTexture_createFromFile("Help_normal.png",
    NULL);
    run->help_button_sprite = sfSprite_create();
    run->rules_button_pushed = sfTexture_createFromFile("Rules_pushed.png",
    NULL);
    run->rules_button_normal = sfTexture_createFromFile("Rules_normal.png",
    NULL);
    run->rules_button_sprite = sfSprite_create();
    run->options = sfTexture_createFromFile("Options.png", NULL);
    run->options_sprite = sfSprite_create();
    run->help = sfTexture_createFromFile("Help.png", NULL);
    run->help_sprite = sfSprite_create();
    variable_affectation_5(run);
}

void variable_affectation_3(my_t *run)
{
    run->rect_player_dying.height = 95;
    run->rect_player_dying.width = 83;
    run->clock_player_walking = sfClock_create();
    run->clock_player_jumping = sfClock_create();
    run->clock_player_running = sfClock_create();
    run->clock_player_dying = sfClock_create();
    run->barrel_moving = sfTexture_createFromFile("barrel_moving.png", NULL);
    run->barrel_destroy = sfTexture_createFromFile("barrel_destroy.png", NULL);
    run->barrel_sprite = sfSprite_create();
    run->rect_barrel.height = 96;
    run->rect_barrel.width = 96;
    run->clock_barrel = sfClock_create();
    run->menu = sfTexture_createFromFile("menu.png", NULL);
    run->menu_sprite = sfSprite_create();
    run->play_button_pushed = sfTexture_createFromFile("Play_pushed.png",
    NULL);
    run->play_button_normal = sfTexture_createFromFile("Play_normal.png",
    NULL);
    run->play_button_sprite = sfSprite_create();
    variable_affectation_4(run);
}

void variable_affectation_2(my_t *run)
{
    run->background_4 = sfTexture_createFromFile("background_4.png", NULL);
    run->background_4_sprite = sfSprite_create();
    run->rect_backgrond_4.height = 1080;
    run->rect_backgrond_4.width = 1920;
    run->clock_background_4 = sfClock_create();
    run->player_walking = sfTexture_createFromFile("barbarian_walking.png",
    NULL);
    run->player_jumping = sfTexture_createFromFile("barbarian_jumping.png",
    NULL);
    run->player_running = sfTexture_createFromFile("barbarian_running.png",
    NULL);
    run->player_dying = sfTexture_createFromFile("barbarian_dying.png", NULL);
    run->player_sprite = sfSprite_create();
    run->rect_player_walking.height = 90;
    run->rect_player_walking.width = 59;
    run->rect_player_running.height = 90;
    run->rect_player_running.width = 60;
    run->rect_player_jumping.height = 90;
    run->rect_player_jumping.width = 48;
    variable_affectation_3(run);
}

void variable_affectation(my_t *run)
{
    reset_variable(run);
    run->background_1 = sfTexture_createFromFile("background_1.png", NULL);
    run->background_1_sprite = sfSprite_create();
    run->rect_backgrond_1.height = 1080;
    run->rect_backgrond_1.width = 1920;
    run->clock_background_1 = sfClock_create();
    run->background_2 = sfTexture_createFromFile("background_2.png", NULL);
    run->background_2_sprite = sfSprite_create();
    run->rect_backgrond_2.height = 1080;
    run->rect_backgrond_2.width = 1920;
    run->clock_background_2 = sfClock_create();
    run->background_3 = sfTexture_createFromFile("background_3.png", NULL);
    run->background_3_sprite = sfSprite_create();
    run->rect_backgrond_3.height = 1080;
    run->rect_backgrond_3.width = 1920;
    run->clock_background_3 = sfClock_create();
    variable_affectation_2(run);
}