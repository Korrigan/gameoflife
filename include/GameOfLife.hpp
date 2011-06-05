//
// GameOfLife.hpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:11:17 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:11:17 2011 Matthieu Rosinski
//

#ifndef		GAMEOFLIFE_H_
# define	GAMEOFLIFE_H_

# include	"Cell.hpp"

# define	DEFAULT_BOARD_SIZE	16

class GameOfLife
{
protected:
  std::vector<std::vector<Cell> > _board;
  int _size;
  int count_neighbours(int, int);
  void init_board(void);
  int game_rulez(Cell &c, int nb);

public:
  GameOfLife(void);
  GameOfLife(int);
  ~GameOfLife(void);

  int prepare(void);
  void process(void);
  void show(void);
  int operator()(void);
};

#endif	//	!GAMEOFLIFE_H_
