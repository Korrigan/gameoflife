//
// apply_state.cpp for Cell in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:22:38 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:22:38 2011 Matthieu Rosinski
//

#include	"Cell.hpp"

void Cell::apply_state(void)
{
  if (this->_state == WILL_LIVE)
    this->_state = LIVING;
  else if (this->_state == WILL_DIE)
    this->_state = DIED;    
}
