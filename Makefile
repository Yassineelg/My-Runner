##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	compiles/end.c	\
		compiles/game.c	\
		compiles/menu.c	\
		compiles/setup.c	\
		compiles/main_2.c	\
		compiles/menu_2.c	\
		compiles/events.c	\
		compiles/parallax.c	\
		compiles/variables.c	\
		compiles/my_getnbr.c	\
		compiles/my_strlen.c	\
		compiles/variables_2.c	\
		compiles/my_rev_putnbr.c	\
		compiles/game_conditions.c	\
		compiles/player_animation.c	\
		compiles/destroy_functions.c	\
		compiles/main.c

NAME	=	my_runner

all:	$(NAME)

$(NAME):
	gcc $(SRC) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -o $(NAME)

clean:
	rm -rf *~ \#*\# .\#*

fclean:
	rm -f $(NAME)

re:	fclean all clean