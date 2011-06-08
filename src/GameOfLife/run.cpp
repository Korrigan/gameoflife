//
// run.cpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 20:34:45 2011 Matthieu Rosinski
// Last update Sun Jun  5 20:34:45 2011 Matthieu Rosinski
//

#include	<vector>

#include	"GameOfLife.hpp"

int GameOfLife::operator()(void)
{
  while (this->prepare())
    {
      this->show();
      this->process();
    }
  return (0);
}
