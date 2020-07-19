/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** game_conditions
*/

#include "my.h"

void jump_conditions(my_t *run)
{
    if (run->jump == 1) {
        sfSprite_setTextureRect(run->player_sprite, run->rect_player_jumping);
        sfSprite_setTexture(run->player_sprite, run->player_jumping, sfFalse);
        run->player_position.y -= 6;
        run->i++;
    }
    if (run->jump == 0 && run->player_position.y < 759) {
        sfSprite_setTexture(run->player_sprite, run->player_walking, sfFalse);
        run->player_position.y += 5;
    }
    if (run->i == 45) {
        sfSprite_setTextureRect(run->player_sprite, run->rect_player_walking);
        sfSprite_setTexture(run->player_sprite, run->player_walking, sfFalse);
        run->jump = 0;
        run->i = 0;
    }
}

void move_conditions(my_t *run)
{
    if (!sfKeyboard_isKeyPressed(sfKeyD) &&
    !sfKeyboard_isKeyPressed(sfKeyRight) && !run->jump) {
        sfSprite_setTextureRect(run->player_sprite, run->rect_player_walking);
        sfSprite_setTexture(run->player_sprite, run->player_walking, sfFalse);
        run->right = 0;
    }
    if (!sfKeyboard_isKeyPressed(sfKeyQ) && !sfKeyboard_isKeyPressed(sfKeyLeft)
    && !run->jump)
        run->left = 0;
    if (run->right == 1 && run->player_position.x < 1865 && !run->jump) {
        sfSprite_setTextureRect(run->player_sprite, run->rect_player_running);
        sfSprite_setTexture(run->player_sprite, run->player_running, sfFalse);
        run->player_position.x += 2;
    }
    if (run->left == 1 && run->player_position.x > 0 && !run->jump) {
        sfSprite_setTextureRect(run->player_sprite, run->rect_player_walking);
        sfSprite_setTexture(run->player_sprite, run->player_walking, sfFalse);
        run->player_position.x -= 4;
    }
}

void barrel_condition(my_t *run)
{
    sfSprite_setTextureRect(run->player_sprite, run->rect_player_dying);
    sfSprite_setTexture(run->player_sprite, run->player_dying, sfFalse);
    sfSprite_setTexture(run->barrel_sprite, run->barrel_destroy, sfFalse);
    sfClock_restart(run->clock_end);
    sfMusic_stop(run->game_zik);
    sfMusic_stop(run->die_zik);
    sfMusic_stop(run->barrel_zik);
    sfMusic_play(run->die_zik);
    sfMusic_play(run->barrel_zik);
    hit_by_the_barrel(run);
    if (run->score > run->highest_score) {
        run->highest_score = run->score;
        sfSprite_setTexture(run->lose_sprite, run->lose_win, sfFalse);
    } else if (run->score < run->highest_score) {
        sfSprite_setTexture(run->lose_sprite, run->lose_loser, sfFalse);
    } else
        sfSprite_setTexture(run->lose_sprite, run->lose_equal, sfFalse);
    sfMusic_stop(run->game_zik);
    sfMusic_play(run->lose_zik);
    run->status = 3;
}

void game_conditions(my_t *run)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(run->clock_score)) > 1) {
        run->score++;
        sfClock_restart(run->clock_score);
    }
    jump_conditions(run);
    move_conditions(run);
    if ((run->player_position.x + 40 >= run->barrel_position.x &&
    run->player_position.x <= run->barrel_position.x + 80 &&
    run->player_position.y >= run->barrel_position.y - 20) ||
    (run->score == run->max_score && run->t_i == 0)) {
        barrel_condition(run);
    }
    player_animation(run);
    if (run->barrel_position.x <= 0) {
        run->barrel_speed += 0.5;
        run->barrel_position.x = 2000;
    }
}