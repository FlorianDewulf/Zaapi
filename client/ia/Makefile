##
## Makefile for zappy in /home/seth/System_unix/zappy-poney/client/ia
## 
## Made by kevin lansel
## Login   <lansel_k@epitech.net>
## 
## Started on  Tue Jul 16 23:27:04 2013 kevin lansel
## Last update Tue Jul 16 23:31:00 2013 kevin lansel
##

NAME=		Ia

SRC=		main.cpp		\
		tmp.cpp			\
		get_next_line.cpp	\
		Network.cpp		\

OBJ=		$(SRC:.cpp=.o)

CC=		g++

CFLAGS+=	-Wall -W -Wextra

RM=		rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		clean all

.PHONY:		all clean fclean re