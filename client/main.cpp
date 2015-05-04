//
// main.cpp for zappy main princ in /home/peelou/SVN/zappy-poney/client
// 
// Made by gery baudry
// Login   <baudry_g@epitech.net>
// 
// Started on  Wed Jul  3 10:28:42 2013 gery baudry
// Last update Tue Jul 16 23:31:53 2013 florian dewulf
//
#include	<unistd.h>
#include	<string>
#include	<iostream>
#include	<cstdlib>
#include	<cstdio>
#include	<pthread.h>

void		*launchDisplay(void *str)
{
  char		*s = (char *)str;
  execlp("./display", "display", s, NULL);
  return (NULL);
}

void		*launchIA(void *str)
{
  char		*s = (char *)str;
  execlp("./ia", "ia", s, NULL);
  return (NULL);
}

int		main(int ac, char **av)
{
  std::string	s;
  char		*str;
  int		i = 1;
  pthread_t	th1, th2;
  void		*ret;

  if (ac == 5 || ac == 7)
    {
      while (i < ac)
	{
	  s += (std::string)av[i] + " ";
	  i++;
	}
      str = (char *)s.c_str();
      if (pthread_create(&th1, NULL, launchDisplay, str) < 0) {
	std::cerr << "Erreur lors de la création du thread Display" << std::endl;
	return (0);
      }
      if (pthread_create(&th2, NULL, launchIA, str) < 0) {
	std::cerr << "Erreur lors de la création du thread IA" << std::endl;
	return (0);
      }
      (void)pthread_join(th1, &ret);
      (void)pthread_join(th2, &ret);
    }
  else
    {
      std::cout << "USAGE: ./Client [-h hote] [-n equipe] [-p port]" << std::endl;
      return (0);
    }
  return (0);
}
