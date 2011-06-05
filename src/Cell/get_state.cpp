//
// get_state.cpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:21:43 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:21:43 2011 Matthieu Rosinski
//

#include	"Cell.hpp"

e_state Cell::get_state(void)
{
  return (this->_state);
}
