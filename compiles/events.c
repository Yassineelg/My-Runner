/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** events
*/

#include "my.h"

void button_events(my_t *run)
{
    if (run->events.type == sfEvtMouseButtonPressed &&
    run->events.mouseButton.button == sfMouseLeft &&
    run->status == 0 && run->mouse_position.x >= 179 &&
    run->mouse_position.x <= 428 && run->mouse_position.y >= 520 &&
    run->mouse_position.y <= 608)
        run->status = 4;
    if (run->events.type == sfEvtMouseButtonPressed &&
    run->events.mouseButton.button == sfMouseLeft &&
    run->status == 0 && run->mouse_position.x >= 178 &&
    run->mouse_position.x <= 387 && run->mouse_position.y >= 651 &&
    run->mouse_position.y <= 739)
        run->status = 5;
    if (run->events.type == sfEvtMouseButtonPressed &&
    run->events.mouseButton.button == sfMouseLeft &&
    run->status == 0 && run->mouse_position.x >= 177 &&
    run->mouse_position.x <= 494 && run->mouse_position.y >= 771 &&
    run->mouse_position.y <= 838)
        run->status = 6;
}

void events_4(my_t *run)
{
    if (sfKeyboard_isKeyPressed(sfKeyD) ||
    sfKeyboard_isKeyPressed(sfKeyRight))
        run->right = 1;
    if (sfKeyboard_isKeyPressed(sfKeyQ) ||
    sfKeyboard_isKeyPressed(sfKeyLeft)) {
        run->left = 1;
        run->x = 2;
    } else
        run->x = 1;
    if ((sfKeyboard_isKeyPressed(sfKeySpace)
    || sfKeyboard_isKeyPressed(sfKeyUp) || sfKeyboard_isKeyPressed(sfKeyZ))
    && run->player_position.y >= 759) {
        run->jump = 1;
        sfMusic_stop(run->jump_zik);
        sfMusic_play(run->jump_zik);
    }
}

void events_3(my_t *run)
{
    if (sfKeyboard_isKeyPressed(sfKeyR) && run->status != 0) {
        reset_variable(run);
        sfMusic_stop(run->lose_zik);
        sfMusic_getLoop (run->game_zik);
        sfMusic_play(run->game_zik);
        run->status = 1;
    }
    if (run->events.type == sfEvtClosed ||
    sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfMusic_stop(run->menu_zik);
        sfMusic_stop(run->game_zik);
        sfMusic_stop(run->lose_zik);
        sfMusic_stop(run->die_zik);
        sfMusic_stop(run->barrel_zik);
        sfMusic_stop(run->jump_zik);
        sfRenderWindow_close(run->window);
    }
    events_4(run);
}

void events_2(my_t *run)
{
    if (run->events.type == sfEvtMouseButtonPressed &&
    run->events.mouseButton.button == sfMouseLeft &&
    run->status == 0 && run->mouse_position.x >= 1168 &&
    run->mouse_position.x <= 1818 && run->mouse_position.y >= 562 &&
    run->mouse_position.y <= 776) {
        reset_variable(run);
        sfMusic_stop(run->menu_zik);
        sfMusic_getLoop (run->game_zik);
        sfMusic_play(run->game_zik);
        run->status = 1;
    }
    button_events(run);
    if (sfKeyboard_isKeyPressed(sfKeyC) && run->status != 0) {
        sfMusic_stop(run->game_zik);
        sfMusic_getLoop (run->menu_zik);
        if (run->status < 4)
            sfMusic_play(run->menu_zik);
        run->status = 0;
    }
    events_3(run);
}

void events(my_t *run)
{
    while (sfRenderWindow_pollEvent(run->window, &run->events)) {
        events_2(run);
        if ((sfKeyboard_isKeyPressed(sfKeyDown) ||
        sfKeyboard_isKeyPressed(sfKeyS))
        && run->player_position.y <= 759) {
            run->jump = 0;
            run->i = 0;
        }
    }
}