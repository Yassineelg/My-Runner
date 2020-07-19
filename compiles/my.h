/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** all prototypes.
*/

#ifndef MY_H
#define MY_H

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_strlen(char *str);
int my_getnbr(char const *str);
char *my_rev_putnbr(int nb);

typedef struct my_struct_s {
    float barrel_speed;
    char *highest_score_str;
    int highest_score;
    int max_score;
    int status;
    int score;
    int right;
    int left;
    int jump;
    int t_i;
    int x;
    int i;
    sfRenderWindow *window;
    sfEvent events;
    sfMusic *menu_zik;
    sfMusic *game_zik;
    sfMusic *lose_zik;
    sfMusic *die_zik;
    sfMusic *barrel_zik;
    sfMusic *jump_zik;
    sfVector2i mouse_position;
    sfVector2f barrel_position;
    sfVector2f player_position;
    sfVector2f position_highest_score;
    sfVector2f position_score;
    sfIntRect rect_barrel;
    sfIntRect rect_player_walking;
    sfIntRect rect_player_jumping;
    sfIntRect rect_player_running;
    sfIntRect rect_player_dying;
    sfIntRect rect_backgrond_1;
    sfIntRect rect_backgrond_2;
    sfIntRect rect_backgrond_3;
    sfIntRect rect_backgrond_4;
    sfClock *clock_end;
    sfClock *clock_score;
    sfClock *clock_barrel;
    sfClock *clock_player_walking;
    sfClock *clock_player_jumping;
    sfClock *clock_player_running;
    sfClock *clock_player_dying;
    sfClock *clock_background_1;
    sfClock *clock_background_2;
    sfClock *clock_background_3;
    sfClock *clock_background_4;
    sfText *txt_highest_score;
    sfText *txt_score;
    sfFont *font;
    sfTexture *barrel_moving;
    sfTexture *barrel_destroy;
    sfTexture *player_walking;
    sfTexture *player_jumping;
    sfTexture *player_running;
    sfTexture *player_dying;
    sfTexture *menu;
    sfTexture *play_button_pushed;
    sfTexture *play_button_normal;
    sfTexture *options_button_pushed;
    sfTexture *options_button_normal;
    sfTexture *help_button_pushed;
    sfTexture *help_button_normal;
    sfTexture *rules_button_pushed;
    sfTexture *rules_button_normal;
    sfTexture *options;
    sfTexture *help;
    sfTexture *rules;
    sfTexture *lose_equal;
    sfTexture *lose_loser;
    sfTexture *lose_win;
    sfTexture *background_1;
    sfTexture *background_2;
    sfTexture *background_3;
    sfTexture *background_4;
    sfSprite *barrel_sprite;
    sfSprite *player_sprite;
    sfSprite *menu_sprite;
    sfSprite *play_button_sprite;
    sfSprite *options_button_sprite;
    sfSprite *help_button_sprite;
    sfSprite *rules_button_sprite;
    sfSprite *options_sprite;
    sfSprite *help_sprite;
    sfSprite *rules_sprite;
    sfSprite *lose_sprite;
    sfSprite *background_1_sprite;
    sfSprite *background_2_sprite;
    sfSprite *background_3_sprite;
    sfSprite *background_4_sprite;
} my_t;

void end(my_t *run);
void menu(my_t *run);
void help(my_t *run);
void game(my_t *run);
void rules(my_t *run);
void setup(my_t *run);
void events(my_t *run);
void setup_2(my_t *run);
void events_2(my_t *run);
void events_3(my_t *run);
void events_4(my_t *run);
void options(my_t *run);
void parallax(my_t *run);
void parallax_2(my_t *run);
void button_events(my_t *run);
void animation_die(my_t *run);
void reset_variable(my_t *run);
void high_score_save(my_t *run);
void move_conditions(my_t *run);
void jump_conditions(my_t *run);
void game_conditions(my_t *run);
void high_score_setup(my_t *run);
void destroy_function(my_t *run);
void player_animation(my_t *run);
void barrel_condition(my_t *run);
void button_conditions(my_t *run);
void hit_by_the_barrel(my_t *run);
void destroy_function_2(my_t *run);
void destroy_function_3(my_t *run);
void destroy_function_4(my_t *run);
int max_score(my_t *run, char **av);
void button_conditions_2(my_t *run);
void variable_affectation(my_t *run);
void variable_affectation_6(my_t *run);
void variable_affectation_5(my_t *run);
void variable_affectation_4(my_t *run);
void variable_affectation_3(my_t *run);
void variable_affectation_2(my_t *run);
void parameter(my_t *run, int ac, char **av);

#endif