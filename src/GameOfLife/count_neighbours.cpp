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

  for (size_t i = 0; i < sizeof(dirs) / sizeof(dirs[0]); i++)
    if (this->_board[y][x].get_state() == LIVING)
      nb++;
  return (nb);
}
