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
#include	<fstream>
#include	<vector>

#include	"Cell.hpp"
#include	"GameOfLife.hpp"

void GameOfLife::init_board(std::ifstream &in)
{
  this->_board.resize(this->_size);
  for (int i = 0; i < this->_size; i++)
    {
      for (int j = 0; j < this->_size; j++)
	{
	  char c;
	  in.get(c);
	  in.ignore();
	  this->_board[i].push_back(c == LIVE_CHAR ?
				    LIVING : DIED);
	}
    }
}

GameOfLife::GameOfLife(char *map, int size)
{
  std::ifstream in(map);
  this->_size = size;
  this->init_board(in);
}
