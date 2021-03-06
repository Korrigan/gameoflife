//
// main.cpp for gameoflife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:01:25 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:01:25 2011 Matthieu Rosinski
//

#include	<iostream>
#include	<vector>
#include	<cstdlib>

#include	"GameOfLife.hpp"

int		main(int ac, char **av)
{
  if (ac < 2)
    {
      std::cerr << "Usage: "
		<< av[0]
		<< " <map_file>..."
		<< std::endl;
      return (EXIT_FAILURE);
    }
  GameOfLife	engine(av[1]);
  return (engine());
}
