//
// GameOfLife.cpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:07:06 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:07:06 2011 Matthieu Rosinski
//

#include	<iostream>
#include	<vector>

#include	"Cell.hpp"
#include	"GameOfLife.hpp"

void GameOfLife::init_board(void)
{
  this->_board.resize(this->_size);
  for (int i = 0; i < this->_size; i++)
    {
      for (int j = 0; j < this->_size; j++)
	{
	  char c;
	  std::cin >> c;
	  std::cin.ignore();
	  this->_board[i].push_back(c == 'x' ? LIVING : DIED);
	}
    }
}

GameOfLife::GameOfLife(void)
{
  this->_size = DEFAULT_BOARD_SIZE;
  this->init_board();
}

GameOfLife::GameOfLife(int size)
{
  if (size < 0)
    size = DEFAULT_BOARD_SIZE;
  this->_size = size;
  this->init_board();
}

GameOfLife::~GameOfLife()
{
  this->_board.clear();
}
