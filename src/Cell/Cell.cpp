//
// Cell.cpp for gameoflife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:18:36 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:18:36 2011 Matthieu Rosinski
//

#include	"Cell.hpp"

Cell::Cell(void)
{
  this->_state = DIED;
}

Cell::Cell(e_state state)
{
  this->_state = state;
}
