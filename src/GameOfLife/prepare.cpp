//
// prepare.cpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:38:01 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:38:01 2011 Matthieu Rosinski
//

#include	<vector>

#include	"Cell.hpp"
#include	"GameOfLife.hpp"

/*
 * < 2 : death alone
 * > 3 : death by surpopulation
 * = 3 : new cell
 */
int GameOfLife::game_rulez(Cell &c, int nb)
{
  e_state	state;

  state = c.get_state();
  if ((nb < 2 || nb > 3) && (state == LIVING))
    c.die();
  else if ((nb == 3) && (state == DIED))
    c.live();
  else
    return (0);
  return (1);
}

int GameOfLife::prepare(void)
{
  int		changes = 0;

  for (int i = 0; i < this->_size; i++)
    for (int j = 0; j < this->_size; j++)
      changes += game_rulez(this->_board[i][j], this->count_neighbours(j, i));
  return (changes);
}
