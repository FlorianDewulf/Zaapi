##
## Makefile for  in /home/lund/svn/zappy-poney
## 
## Made by florian dewulf
## Login   <dewulf_f@epitech.net>
## 
## Started on  Tue Jul 16 23:28:07 2013 florian dewulf
## Last update Tue Jul 16 23:29:57 2013 florian dewulf
##

all:
		make -C ./serveur
		make -C ./client
		make -C ./client/display
		make -C ./client/ia

clean:
		make -C ./serveur
		make -C ./client
		make -C ./client/display
		make -C ./client/ia

fclean:
		make -C ./serveur
		make -C ./client
		make -C ./client/display
		make -C ./client/ia

re:
		make -C ./serveur
		make -C ./client
		make -C ./client/display
		make -C ./client/ia