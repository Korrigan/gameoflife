//
// Cell.hpp for GameOfLife in /home/korrigan/dev/proj/gameoflife
// 
// Made by Matthieu Rosinski
// Login   <korrigan@epitech.net>
// 
// Started on  Sun Jun  5 13:14:21 2011 Matthieu Rosinski
// Last update Sun Jun  5 13:14:21 2011 Matthieu Rosinski
//

#ifndef		CELL_H_
# define	CELL_H_

typedef enum
  {
    LIVING,
    DIED,
    WILL_LIVE,
    WILL_DIE
  }		e_state;

class Cell
{
protected:
  e_state	_state;

public:
  Cell(void);
  Cell(e_state);

  void		live(void);
  void		die(void);
  void		apply_state(void);
  e_state	get_state(void);
};

#endif	//	!CELL_H_
