//
// count_neighbours.cpp for  in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 16:29:59 2011 Matthieu Rosinski
// Last update Sun Jun  5 16:29:59 2011 Matthieu Rosinski
//

#include	<vector>

#include	"Cell.hpp"
#include	"GameOfLife.hpp"

const int	dirs[][2] =
  {
    {1, 0},
    {-1, 0},
    {0, 1},
    {0, -1},
    {1, 1},
    {-1, 1},
    {1, -1},
    {-1, -1}
  };

int GameOfLife::count_neighbours(int x, int y)
{
  int	       nb = 0;
  e_state      st;

  for (size_t i = 0; i < sizeof(dirs) / sizeof(dirs[0]); i++)
    {
      if (y + dirs[i][0] == this->_size || y + dirs[i][0] < 0
	  || x + dirs[i][1] == this->_size || x + dirs[i][1] < 0)
	continue;
      st = this->_board[y + dirs[i][0]][x + dirs[i][1]].get_state();
      if (st == LIVING || st == WILL_DIE)
	nb++;
    }
  return (nb);
}
