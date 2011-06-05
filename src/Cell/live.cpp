//
// live.cpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:36:15 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:36:15 2011 Matthieu Rosinski
//

#include	"Cell.hpp"

void Cell::live(void)
{
  this->_state = WILL_LIVE;
}
