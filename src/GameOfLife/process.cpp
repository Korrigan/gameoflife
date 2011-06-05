//
// process.cpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 16:24:20 2011 Matthieu Rosinski
// Last update Sun Jun  5 16:24:20 2011 Matthieu Rosinski
//

#include	<vector>

#include	"Cell.hpp"
#include	"GameOfLife.hpp"

void GameOfLife::process(void)
{
  for (int i = 0; i < this->_size; i++)
    for (int j = 0; j < this->_size; j++)
      this->_board[i][j].apply_state();
}
