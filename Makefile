##
## Makefile for  in /home/korrigan/dev/proj/gameoflife
## 
## Made by Matthieu Rosinski
## Login   <korrigan@epitech.net>
## 
## Started on  Sun Jun  5 12:51:41 2011 Matthieu Rosinski
## Last update Sun Jun  5 12:51:41 2011 Matthieu Rosinski
##

NAME=		game_of_life
SRCF=		main.cpp
GOLF=		GameOfLife.cpp \
		run.cpp \
		prepare.cpp \
		process.cpp \
		count_neighbours.cpp \
		show.cpp
CELLF=		Cell.cpp \
		live.cpp \
		die.cpp \
		get_state.cpp \
		apply_state.cpp

SRCF+=		$(addprefix GameOfLife/, $(GOLF)) \
		$(addprefix Cell/, $(CELLF))

SRC=		$(addprefix src/, $(SRCF))

OBJ=		$(SRC:.cpp=.o)

CXX=		g++
RM=		@rm -fv

CXXFLAGS=	-W -Wall -Wextra -g3 \
		-Iinclude

$(NAME):	$(OBJ)
		$(CXX) -o $@ $^

all:		$(NAME)

%.o:		%.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
