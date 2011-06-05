//
// show.cpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 18:10:09 2011 Matthieu Rosinski
// Last update Sun Jun  5 18:10:09 2011 Matthieu Rosinski
//

#include	<vector>
#include	<iostream>

#include	"Cell.hpp"
#include	"GameOfLife.hpp"

void GameOfLife::show(void)
{
  e_state	state;

  for (int k = 0; k < this->_size; k++)
    std::cout << "==";
  std::cout << std::endl;
  for (int i = 0; i < this->_size; i++)
    for (int j = 0; j < this->_size; j++)
      {
	state = this->_board[i][j].get_state();
	std::cout << (state == LIVING || state == WILL_DIE ? "x" : ".");
	if (j == this->_size - 1)
	  std::cout << std::endl;
	else
	  std::cout << " ";
      }
}
