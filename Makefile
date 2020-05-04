##
## EPITECH PROJECT, 2020
## AIA_n4s_2019 [WSL: Debian]
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"

## ========================================================================== ##
PATH_CONTROLLER		=	source/controller/
CONTROLLER			=	display.c	\
						error.c	\
						free.c	\
						init.c	\
						process.c	\

## ========================================================================== ##
PATH_LIB		=	source/lib/
LIB				=	move_left.c	\
					move_right.c	\
					print_msg.c	\


## ========================================================================== ##
SRC				=	source/main.c	\
					$(addprefix $(PATH_CONTROLLER), $(CONTROLLER))	\
					$(addprefix $(PATH_LIB), $(LIB))	\

BIN				= 	ai

CC				= 	gcc

OBJ 			= 	$(SRC:.c=.o)

RM				=	rm -rf

CFLAGS			=	-W -Wall

LDFLAGS			=	-Iinclude/ -Llibrary \
					-l_stat	\
					-l_assert	\
					-l_string	\
					-l_maths	\

DFLAGS			=	-g -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wno-attributes -Wsequence-point -pg

all:			$(BIN)

$(BIN):			lib $(OBJ)
				@$(CC) -o $(BIN) $(OBJ) $(LDFLAGS) $(CFLAGS) $(DFLAGS)
				@$(call SUCCESS, "----- Let\'s begin to play ! -----")

lib:
				@$(MAKE) -C library/string/
				@$(MAKE) -C library/stat/
				@$(MAKE) -C library/maths/
				@$(MAKE) -C library/assert/

clean:
				$(RM) $(OBJ)
				@$(MAKE) -C library/string/ clean
				@$(MAKE) -C library/stat/ clean
				@$(MAKE) -C library/maths/ clean
				@$(MAKE) -C library/assert/ clean

fclean:			clean
				$(RM) $(BIN)
				@$(MAKE) -C library/string/ fclean
				@$(MAKE) -C library/stat/ fclean
				@$(MAKE) -C library/maths/ fclean
				@$(MAKE) -C library/assert/ fclean

re_lib:
				@$(MAKE) -C library/string/ re
				@$(MAKE) -C library/stat/ re
				@$(MAKE) -C library/maths/ re
				@$(MAKE) -C library/assert/ re

re:				fclean all

run:			all
	./pipes.sh

.PHONY:			 all, fclean, re, library

## ========================================================================== ##
%.o: %.c
				@(echo -e "\033[32m[Controller] :[\033[31m \c")
				@(echo -e "$@ \033[32m]\033[0m\033[0K")
				@($(CC) $(CFLAGS) $(LDFLAGS) -c -o $@ $<)
				@(echo -e "\033[2F")
