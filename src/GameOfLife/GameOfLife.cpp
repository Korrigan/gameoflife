//
// GameOfLife.cpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:07:06 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:07:06 2011 Matthieu Rosinski
//

#include	<vector>

#include	"Cell.hpp"
#include	"GameOfLife.hpp"

void GameOfLife::init_board(void)
{
  for (int i = 0; i < _size; i++)
    for (int j = 0; j < _size; j++)
      _board[i].push_back(DIED);
}

GameOfLife::GameOfLife()
{
  this->_size = 0;
  init_board();
}

GameOfLife::GameOfLife(int size)
{
  if (size > 0)
    size = DEFAULT_BOARD_SIZE;
  this->_size = size;
  this->init_board();
}

GameOfLife::~GameOfLife()
{
  this->_board.clear();
}
