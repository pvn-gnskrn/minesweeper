#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

struct grid
{
	char array[10];
};

//ROW 1
struct grid map;
struct grid board;

struct grid map1;
struct grid board1;

struct grid map2;
struct grid board2;

//ROW 2
struct grid map3;
struct grid board3;

struct grid map4;
struct grid board4;

struct grid map5;
struct grid board5;

//ROW 3
struct grid map6;
struct grid board6;

struct grid map7;
struct grid board7;

struct grid map8;
struct grid board8;



char input;
int ind;
int loop = 9;

void display_board()
{
	if (board.array[0] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(20, 90, "%c", board.array[0]);
		attrset(A_NORMAL);
	}
	else if (board.array[0] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(20, 90, "%c", board.array[0]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(20, 90, "%c", board.array[0]);
	}
		
	if (board.array[1] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(20, 91, "%c", board.array[1]);
		attrset(A_NORMAL);
	}
	else if (board.array[1] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(20, 91, "%c", board.array[1]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(20, 91, "%c", board.array[1]);
	}
	
	if (board.array[2] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(20, 92, "%c", board.array[2]);
		attrset(A_NORMAL);
	}
	else if (board.array[2] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(20, 92, "%c", board.array[2]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(20, 92, "%c", board.array[2]);
	}
	
	if (board.array[3] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(21, 90, "%c", board.array[3]);
		attrset(A_NORMAL);
	}
	else if (board.array[3] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(21, 90, "%c", board.array[3]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(21, 90, "%c", board.array[3]);
	}
	
	if (board.array[4] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(21, 91, "%c", board.array[4]);
		attrset(A_NORMAL);
	}
	else if (board.array[4] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(21, 91, "%c", board.array[4]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(21, 91, "%c", board.array[4]);
	}
	
	if (board.array[5] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(21, 92, "%c", board.array[5]);
		attrset(A_NORMAL);
	}
	else if (board.array[5] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(21, 92, "%c", board.array[5]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(21, 92, "%c", board.array[5]);
	}
	
	if (board.array[6] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(22, 90, "%c", board.array[6]);
		attrset(A_NORMAL);
	}
	else if (board.array[6] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(22, 90, "%c", board.array[6]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(22, 90, "%c", board.array[6]);
	}
	
	if (board.array[7] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(22, 91, "%c", board.array[7]);
		attrset(A_NORMAL);
	}
	else if (board.array[7] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(22, 91, "%c", board.array[7]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(22, 91, "%c", board.array[7]);
	}
	
	if (board.array[8] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(22, 92, "%c", board.array[8]);
		attrset(A_NORMAL);
	}
	else if (board.array[8] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(22, 92, "%c", board.array[8]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(22, 92, "%c", board.array[8]);
	}
	////////////////////////////////////////////////
	
	if (board1.array[0] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(20, 93, "%c", board1.array[0]);
		attrset(A_NORMAL);
	}
	else if (board1.array[0] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(20, 93, "%c", board1.array[0]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(20, 93, "%c", board1.array[0]);
	}
		
	if (board1.array[1] == '~')
	{
	attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(20, 94, "%c", board1.array[1]);
		attrset(A_NORMAL);
	}
	else if (board1.array[1] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(20, 94, "%c", board1.array[1]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(20, 94, "%c", board1.array[1]);
	}
	
	if (board1.array[2] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(20, 95, "%c", board1.array[2]);
		attrset(A_NORMAL);
	}
	else if (board1.array[2] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(20, 95, "%c", board1.array[2]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(20, 95, "%c", board1.array[2]);
	}
	
	if (board1.array[3] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(21, 93, "%c", board1.array[3]);
		attrset(A_NORMAL);
	}
	else if (board1.array[3] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(21, 93, "%c", board1.array[3]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(21, 93, "%c", board.array[3]);
	}
	
	if (board1.array[4] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(21, 94, "%c", board1.array[4]);
		attrset(A_NORMAL);
	}
	else if (board1.array[4] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(21, 94, "%c", board1.array[4]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(21, 94, "%c", board1.array[4]);
	}
	
	if (board1.array[5] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(21, 95, "%c", board1.array[5]);
		attrset(A_NORMAL);
	}
	else if (board1.array[5] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(21, 95, "%c", board1.array[5]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(21, 95, "%c", board1.array[5]);
	}
	
	if (board1.array[6] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(22, 93, "%c", board.array[6]);
		attrset(A_NORMAL);
	}
	else if (board1.array[6] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(22, 93, "%c", board1.array[6]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(22, 93, "%c", board1.array[6]);
	}
	
	if (board1.array[7] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(22, 94, "%c", board1.array[7]);
		attrset(A_NORMAL);
	}
	else if (board1.array[7] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(22, 94, "%c", board1.array[7]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(22, 94, "%c", board1.array[7]);
	}
	
	if (board1.array[8] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(22, 95, "%c", board1.array[8]);
		attrset(A_NORMAL);
	}
	else if (board.array[8] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(22, 95, "%c", board1.array[8]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(22, 95, "%c", board1.array[8]);
	}
	//////////////////////////////////////////////////////////////
	if (board2.array[0] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(20, 96, "%c", board2.array[0]);
		attrset(A_NORMAL);
	}
	else if (board2.array[0] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(20, 96, "%c", board2.array[0]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(20, 96, "%c", board2.array[0]);
	}
		
	if (board2.array[1] == '~')
	{
	attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(20, 97, "%c", board2.array[1]);
		attrset(A_NORMAL);
	}
	else if (board2.array[1] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(20, 97, "%c", board2.array[1]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(20, 97, "%c", board2.array[1]);
	}
	
	if (board2.array[2] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(20, 98, "%c", board2.array[2]);
		attrset(A_NORMAL);
	}
	else if (board2.array[2] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(20, 98, "%c", board2.array[2]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(20, 98, "%c", board2.array[2]);
	}
	
	if (board2.array[3] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(21, 96, "%c", board2.array[3]);
		attrset(A_NORMAL);
	}
	else if (board2.array[3] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(21, 96, "%c", board2.array[3]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(21, 96, "%c", board2.array[3]);
	}
	
	if (board2.array[4] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(21, 97, "%c", board2.array[4]);
		attrset(A_NORMAL);
	}
	else if (board2.array[4] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(21, 97, "%c", board2.array[4]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(21, 97, "%c", board2.array[4]);
	}
	
	if (board2.array[5] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(21, 98, "%c", board2.array[5]);
		attrset(A_NORMAL);
	}
	else if (board2.array[5] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(21, 98, "%c", board2.array[5]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(21, 98, "%c", board2.array[5]);
	}
	
	if (board2.array[6] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(22, 96, "%c", board.array[6]);
		attrset(A_NORMAL);
	}
	else if (board2.array[6] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(22, 96, "%c", board2.array[6]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(22, 96, "%c", board2.array[6]);
	}
	
	if (board2.array[7] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(22, 97, "%c", board2.array[7]);
		attrset(A_NORMAL);
	}
	else if (board2.array[7] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(22, 97, "%c", board2.array[7]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(22, 97, "%c", board2.array[7]);
	}
	
	if (board2.array[8] == '~')
	{
	attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(22, 98, "%c", board2.array[8]);
		attrset(A_NORMAL);
	}
	else if (board2.array[8] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(22, 98, "%c", board2.array[8]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(22, 98, "%c", board2.array[8]);
	}
	/////////////////////////////////////////////////
	if (board3.array[0] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(23, 90, "%c", board3.array[0]);
		attrset(A_NORMAL);
	}
	else if (board3.array[0] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(23, 90, "%c", board3.array[0]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(23, 90, "%c", board3.array[0]);
	}
		
	if (board3.array[1] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(23, 91, "%c", board3.array[1]);
		attrset(A_NORMAL);
	}
	else if (board3.array[1] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(23, 91, "%c", board3.array[1]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(23, 91, "%c", board3.array[1]);
	}
	
	if (board3.array[2] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(23, 92, "%c", board3.array[2]);
		attrset(A_NORMAL);
	}
	else if (board3.array[2] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(23, 92, "%c", board3.array[2]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(23, 92, "%c", board3.array[2]);
	}
	
	if (board3.array[3] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(24, 90, "%c", board3.array[3]);
		attrset(A_NORMAL);
	}
	else if (board3.array[3] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(24, 90, "%c", board3.array[3]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(24, 90, "%c", board3.array[3]);
	}
	
	if (board3.array[4] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(24, 91, "%c", board3.array[4]);
		attrset(A_NORMAL);
	}
	else if (board3.array[4] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(24, 91, "%c", board3.array[4]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(24, 91, "%c", board3.array[4]);
	}
	
	if (board3.array[5] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(24, 92, "%c", board3.array[5]);
		attrset(A_NORMAL);
	}
	else if (board3.array[5] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(24, 92, "%c", board3.array[5]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(24, 92, "%c", board3.array[5]);
	}
	
	if (board3.array[6] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(25, 90, "%c", board3.array[6]);
		attrset(A_NORMAL);
	}
	else if (board3.array[6] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(25, 90, "%c", board3.array[6]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(25, 90, "%c", board3.array[6]);
	}
	
	if (board3.array[7] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(25, 91, "%c", board3.array[7]);
		attrset(A_NORMAL);
	}
	else if (board3.array[7] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(25, 91, "%c", board3.array[7]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(25, 91, "%c", board3.array[7]);
	}
	
	if (board3.array[8] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(25, 92, "%c", board3.array[8]);
		attrset(A_NORMAL);
	}
	else if (board3.array[8] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(25, 92, "%c", board3.array[8]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(25, 92, "%c", board3.array[8]);
	}
	refresh();	
	/////////////////////////////////////////////////
	
	if (board4.array[0] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(23, 93, "%c", board4.array[0]);
		attrset(A_NORMAL);
	}
	else if (board4.array[0] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(23, 93, "%c", board4.array[0]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(23, 93, "%c", board4.array[0]);
	}
		
	if (board4.array[1] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(23, 94, "%c", board4.array[1]);
		attrset(A_NORMAL);
	}
	else if (board4.array[1] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(23, 94, "%c", board4.array[1]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(23, 94, "%c", board4.array[1]);
	}
	
	if (board4.array[2] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(23, 95, "%c", board4.array[2]);
		attrset(A_NORMAL);
	}
	else if (board4.array[2] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(23, 95, "%c", board4.array[2]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(23, 95, "%c", board4.array[2]);
	}
	
	if (board4.array[3] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(24, 93, "%c", board4.array[3]);
		attrset(A_NORMAL);
	}
	else if (board4.array[3] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(24, 93, "%c", board3.array[3]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(24, 93, "%c", board4.array[3]);
	}
	
	if (board4.array[4] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(24, 94, "%c", board4.array[4]);
		attrset(A_NORMAL);
	}
	else if (board4.array[4] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(24, 94, "%c", board4.array[4]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(24, 94, "%c", board4.array[4]);
	}
	
	if (board4.array[5] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(24, 95, "%c", board4.array[5]);
		attrset(A_NORMAL);
	}
	else if (board4.array[5] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(24, 95, "%c", board4.array[5]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(24, 95, "%c", board4.array[5]);
	}
	
	if (board4.array[6] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(25, 93, "%c", board4.array[6]);
		attrset(A_NORMAL);
	}
	else if (board4.array[6] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(25, 93, "%c", board4.array[6]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(25, 93, "%c", board4.array[6]);
	}
	
	if (board4.array[7] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(25, 94, "%c", board4.array[7]);
		attrset(A_NORMAL);
	}
	else if (board4.array[7] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(25, 94, "%c", board4.array[7]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(25, 94, "%c", board4.array[7]);
	}
	
	if (board4.array[8] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(25, 95, "%c", board4.array[8]);
		attrset(A_NORMAL);
	}
	else if (board4.array[8] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(25, 95, "%c", board4.array[8]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(25, 95, "%c", board4.array[8]);
	}
	refresh();	
	////////////////////////////////////////////////
	
	if (board5.array[0] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(23, 96, "%c", board5.array[0]);
		attrset(A_NORMAL);
	}
	else if (board5.array[0] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(23, 96, "%c", board5.array[0]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(23, 96, "%c", board5.array[0]);
	}
		
	if (board5.array[1] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(23, 97, "%c", board5.array[1]);
		attrset(A_NORMAL);
	}
	else if (board5.array[1] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(23, 97, "%c", board5.array[1]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(23, 97, "%c", board5.array[1]);
	}
	
	if (board5.array[2] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(23, 98, "%c", board5.array[2]);
		attrset(A_NORMAL);
	}
	else if (board5.array[2] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(23, 98, "%c", board5.array[2]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(23, 98, "%c", board5.array[2]);
	}
	
	if (board5.array[3] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(24, 96, "%c", board5.array[3]);
		attrset(A_NORMAL);
	}
	else if (board5.array[3] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(24, 96, "%c", board5.array[3]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(24, 96, "%c", board5.array[3]);
	}
	
	if (board5.array[4] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(24, 97, "%c", board5.array[4]);
		attrset(A_NORMAL);
	}
	else if (board5.array[4] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(24, 97, "%c", board5.array[4]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(24, 97, "%c", board5.array[4]);
	}
	
	if (board5.array[5] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(24, 98, "%c", board5.array[5]);
		attrset(A_NORMAL);
	}
	else if (board5.array[5] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(24, 98, "%c", board5.array[5]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(24, 98, "%c", board5.array[5]);
	}
	
	if (board5.array[6] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(25, 96, "%c", board5.array[6]);
		attrset(A_NORMAL);
	}
	else if (board5.array[6] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(25, 96, "%c", board5.array[6]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(25, 96, "%c", board5.array[6]);
	}
	
	if (board5.array[7] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(25, 97, "%c", board5.array[7]);
		attrset(A_NORMAL);
	}
	else if (board5.array[7] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(25, 97, "%c", board5.array[7]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(25, 97, "%c", board5.array[7]);
	}
	
	if (board5.array[8] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(25, 98, "%c", board5.array[8]);
		attrset(A_NORMAL);
	}
	else if (board5.array[8] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(25, 98, "%c", board5.array[8]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(25, 98, "%c", board5.array[8]);
	}
	refresh();	
	////////////////////////////////////////////////
	
	if (board6.array[0] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(26, 90, "%c", board6.array[0]);
		attrset(A_NORMAL);
	}
	else if (board6.array[0] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(26, 90, "%c", board6.array[0]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(26, 90, "%c", board6.array[0]);
	}
		
	if (board6.array[1] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(26, 91, "%c", board6.array[1]);
		attrset(A_NORMAL);
	}
	else if (board6.array[1] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(26, 91, "%c", board6.array[1]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(26, 91, "%c", board6.array[1]);
	}
	
	if (board6.array[2] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(26, 92, "%c", board6.array[2]);
		attrset(A_NORMAL);
	}
	else if (board6.array[2] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(26, 92, "%c", board6.array[2]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(26, 92, "%c", board6.array[2]);
	}
	
	if (board6.array[3] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(27, 90, "%c", board6.array[3]);
		attrset(A_NORMAL);
	}
	else if (board6.array[3] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(27, 90, "%c", board6.array[3]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(27, 90, "%c", board6.array[3]);
	}
	
	if (board6.array[4] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(27, 91, "%c", board6.array[4]);
		attrset(A_NORMAL);
	}
	else if (board6.array[4] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(27, 91, "%c", board6.array[4]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(27, 91, "%c", board6.array[4]);
	}
	
	if (board6.array[5] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(27, 92, "%c", board6.array[5]);
		attrset(A_NORMAL);
	}
	else if (board6.array[5] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(27, 92, "%c", board6.array[5]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(27, 92, "%c", board6.array[5]);
	}
	
	if (board6.array[6] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(28, 90, "%c", board6.array[6]);
		attrset(A_NORMAL);
	}
	else if (board6.array[6] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(28, 90, "%c", board6.array[6]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(28, 90, "%c", board6.array[6]);
	}
	
	if (board6.array[7] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(28, 91, "%c", board6.array[7]);
		attrset(A_NORMAL);
	}
	else if (board6.array[7] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(28, 91, "%c", board6.array[7]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(28, 91, "%c", board6.array[7]);
	}
	
	if (board6.array[8] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(28, 92, "%c", board6.array[8]);
		attrset(A_NORMAL);
	}
	else if (board6.array[8] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(28, 92, "%c", board6.array[8]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(28, 92, "%c", board6.array[8]);
	}
	//////////////////////////////////////////////////
	if (board7.array[0] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(26, 93, "%c", board7.array[0]);
		attrset(A_NORMAL);
	}
	else if (board7.array[0] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(26, 93, "%c", board7.array[0]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(26, 93, "%c", board7.array[0]);
	}
		
	if (board7.array[1] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(26, 94, "%c", board7.array[1]);
		attrset(A_NORMAL);
	}
	else if (board7.array[1] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(26, 94, "%c", board7.array[1]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(26, 94, "%c", board7.array[1]);
	}
	
	if (board7.array[2] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(26, 95, "%c", board7.array[2]);
		attrset(A_NORMAL);
	}
	else if (board7.array[2] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(26, 95, "%c", board7.array[2]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(26, 95, "%c", board7.array[2]);
	}
	
	if (board7.array[3] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(27, 93, "%c", board7.array[3]);
		attrset(A_NORMAL);
	}
	else if (board7.array[3] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(27, 93, "%c", board7.array[3]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(27, 93, "%c", board7.array[3]);
	}
	
	if (board7.array[4] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(27, 94, "%c", board7.array[4]);
		attrset(A_NORMAL);
	}
	else if (board7.array[4] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(27, 94, "%c", board7.array[4]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(27, 94, "%c", board7.array[4]);
	}
	
	if (board7.array[5] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(27, 95, "%c", board7.array[5]);
		attrset(A_NORMAL);
	}
	else if (board7.array[5] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(27, 95, "%c", board7.array[5]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(27, 95, "%c", board7.array[5]);
	}
	
	if (board7.array[6] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(28, 93, "%c", board7.array[6]);
		attrset(A_NORMAL);
	}
	else if (board7.array[6] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(28, 93, "%c", board7.array[6]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(28, 93, "%c", board7.array[6]);
	}
	
	if (board7.array[7] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(28, 94, "%c", board7.array[7]);
		attrset(A_NORMAL);
	}
	else if (board7.array[7] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(28, 94, "%c", board7.array[7]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(28, 94, "%c", board7.array[7]);
	}
	
	if (board7.array[8] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(28, 95, "%c", board7.array[8]);
		attrset(A_NORMAL);
	}
	else if (board7.array[8] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(28, 95, "%c", board7.array[8]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(28, 95, "%c", board7.array[8]);
	}
	/////////////////////////////////////////////////
	if (board8.array[0] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(26, 96, "%c", board8.array[0]);
		attrset(A_NORMAL);
	}
	else if (board8.array[0] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(26, 96, "%c", board8.array[0]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(26, 96, "%c", board8.array[0]);
	}
		
	if (board8.array[1] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(26, 97, "%c", board8.array[1]);
		attrset(A_NORMAL);
	}
	else if (board8.array[1] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(26, 97, "%c", board8.array[1]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(26, 97, "%c", board8.array[1]);
	}
	
	if (board8.array[2] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(26, 98, "%c", board8.array[2]);
		attrset(A_NORMAL);
	}
	else if (board8.array[2] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(26, 98, "%c", board8.array[2]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(26, 98, "%c", board8.array[2]);
	}
	
	if (board8.array[3] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(27, 96, "%c", board8.array[3]);
		attrset(A_NORMAL);
	}
	else if (board8.array[3] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(27, 96, "%c", board8.array[3]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(27, 96, "%c", board8.array[3]);
	}
	
	if (board8.array[4] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(27, 97, "%c", board8.array[4]);
		attrset(A_NORMAL);
	}
	else if (board8.array[4] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(27, 97, "%c", board8.array[4]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(27, 97, "%c", board8.array[4]);
	}
	
	if (board8.array[5] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(27, 98, "%c", board8.array[5]);
		attrset(A_NORMAL);
	}
	else if (board8.array[5] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(27, 98, "%c", board8.array[5]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(27, 98, "%c", board8.array[5]);
	}
	
	if (board8.array[6] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(28, 96, "%c", board8.array[6]);
		attrset(A_NORMAL);
	}
	else if (board8.array[6] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(28, 96, "%c", board8.array[6]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(28, 96, "%c", board8.array[6]);
	}
	
	if (board8.array[7] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(28, 97, "%c", board8.array[7]);
		attrset(A_NORMAL);
	}
	else if (board8.array[7] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(28, 97, "%c", board8.array[7]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(28, 97, "%c", board8.array[7]);
	}
	
	if (board8.array[8] == '~')
	{
		attrset(A_BOLD | COLOR_PAIR(2));
		mvprintw(28, 98, "%c", board8.array[8]);
		attrset(A_NORMAL);
	}
	else if (board8.array[8] == '*')
	{
		attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
		mvprintw(28, 98, "%c", board8.array[8]);
		attrset(A_NORMAL);
	}
	else
	{
		mvprintw(28, 98, "%c", board8.array[8]);
	}
	
	
	refresh();	
	
	
	
}

void get_input()
{
	int i;
	scanf("%c", &input);

	for (i = 0; i < 10; i++)
	{
		if (input >= '0' && input <= '8')
		{
			if (board.array[i] == input)
			{
				ind = i;
				break;
			}
		}

		else if (input >= '!' && input <= '*')
		{
			if (board1.array[i] == input)
			{
				ind = i;
				break;
			}
		}
	
		else if (input >= '+' && input <= '?')
		{
			if (board2.array[i] == input)
			{
				ind = i;
				break;
			}
		}
		
		else if (input >= 'a' && input <= 'i')
		{
			if (board3.array[i] == input)
			{
				ind = i;
				break;
			}
		}

		else if (input >= 'A' && input <= 'I')
		{
			if (board4.array[i] == input)
			{
				ind = i;
				break;
			}
		}

		else if (input >= 'j' && input <= 'r')
		{
			if (board5.array[i] == input)
			{
				ind = i;
				break;
			}
		}

		else if (input >= 'J' && input <= 'R')
		{
			if (board6.array[i] == input)
			{
				ind = i;
				break;
			}
		}

		else if (input >= 's' && input <= '{')
		{
			if (board7.array[i] == input)
			{
				ind = i;
				break;
			}
		}

		else if (input >= 'S' && input <= '[')
		{
			if (board8.array[i] == input)
			{
				ind = i;
				break;
			}
		}
		
		
		

	}
	
}

void update_board()
{
	if (input >= '0' && input <= '8')
	{
		if (ind == 0||ind == 2||ind == 4)
		{
			board.array[0] = map.array[0];
			board.array[2] = map.array[2];
			board.array[4] = map.array[4];
			loop--;
		}

		else
		{
			board.array[ind] = map.array[ind];
			display_board();
			attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
			mvprintw(30, 91,"KABOOM!\n");
			refresh();
			getch();
			endwin();
			exit(0);
		}
	}

	else if (input >= '!' && input <= '*')
	{
		if (ind == 1||ind == 4||ind == 6||ind == 8)
		{
			board1.array[1] = map1.array[1];
			board1.array[4] = map1.array[4];
			board1.array[6] = map1.array[6];
			board1.array[8] = map1.array[8];
			loop--;
		}

		else
		{
			board1.array[ind] = map1.array[ind];
			display_board();
			attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
			mvprintw(30, 91,"KABOOM!\n");
			refresh();
			getch();
			endwin();
			exit(0);
		}
		
		
	}

	else if (input >= '+' && input <= '?')
	{
		if (ind == 0||ind == 1||ind == 5)
		{
			board2.array[0] = map2.array[0];
			board2.array[1] = map2.array[1];
			board2.array[5] = map2.array[5];
			loop--;
		}

		else
		{
			board2.array[ind] = map2.array[ind];
			display_board();
			attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
			mvprintw(30, 91,"KABOOM!\n");
			refresh();
			getch();
			endwin();
			exit(0);
		}

	}

	else if (input >= 'a' && input <= 'i')
	{
		if (ind == 2||ind == 4||ind == 6||ind == 8)
		{
			board3.array[2] = map3.array[2];
			board3.array[4] = map3.array[4];
			board3.array[6] = map3.array[6];
			board3.array[8] = map3.array[8];
			loop--;
		}

		else
		{
			board3.array[ind] = map3.array[ind];
			display_board();
			attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
			mvprintw(30, 91,"KABOOM!\n");
			refresh();
			getch();
			endwin();
			exit(0);
		}

	}

	else if (input >= 'A' && input <= 'I')
	{
		if (ind == 4||ind == 5||ind == 7||ind == 8)
		{
			board4.array[4] = map4.array[4];
			board4.array[5] = map4.array[5];
			board4.array[7] = map4.array[7];
			board4.array[8] = map4.array[8];
			loop--;
		}

		else
		{
			board4.array[ind] = map4.array[ind];
			display_board();
			attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
			mvprintw(30, 91,"KABOOM!\n");
			refresh();
			getch();
			endwin();
			exit(0);
		}

	}

	else if (input >= 'j' && input <= 'r')
	{
		if (ind == 1||ind == 4||ind == 5)
		{
			board5.array[1] = map5.array[1];
			board5.array[4] = map5.array[4];
			board5.array[5] = map5.array[5];
			loop--;
		}

		else
		{
			board5.array[ind] = map5.array[ind];
			display_board();
			attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
			mvprintw(30, 91,"KABOOM!\n");
			refresh();
			getch();
			endwin();
			exit(0);
		}

	}

	else if (input >= 'J' && input <= 'R')
	{
		if (ind == 4||ind == 5||ind == 6||ind == 7)
		{
			board6.array[4] = map6.array[4];
			board6.array[5] = map6.array[5];
			board6.array[6] = map6.array[6];
			board6.array[7] = map6.array[7];
			loop--;
		}

		else
		{
			board6.array[ind] = map5.array[ind];
			display_board();
			attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
			mvprintw(30, 91,"KABOOM!\n");
			refresh();
			getch();
			endwin();
			exit(0);
		}

	}

	else if (input >= 's' && input <= '{')
	{
		if (ind == 4||ind == 8)
		{
			board7.array[4] = map7.array[4];
			board7.array[8] = map7.array[8];
			loop--;
			
		}

		else
		{
			board7.array[ind] = map7.array[ind];
			display_board();
			attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
			mvprintw(30, 91,"KABOOM!\n");
			refresh();
			getch();
			endwin();
			exit(0);
		}

	}

	else if (input >= 'S' && input <= '[')
	{
		if (ind == 1||ind == 4||ind == 7||ind == 8)
		{
			board8.array[1] = map8.array[1];
			board8.array[4] = map8.array[4];
			board8.array[7] = map8.array[7];
			board8.array[8] = map8.array[8];
			loop--;
		}

		else
		{
			board8.array[ind] = map8.array[ind];
			display_board();
			attrset(A_BOLD | A_BLINK | COLOR_PAIR(1));
			mvprintw(30, 91,"KABOOM!\n");
			refresh();
			getch();
			endwin();
			exit(0);
		}

	}
}

void main()
{
//MINE MAPPING
	
	//ROW 1:

	//[~][*][~]
	//[*][~][*]
	//[*][*][*]
	map.array[0] = '~';
	map.array[1] = '*';
	map.array[2] = '~';
	map.array[3] = '*';
	map.array[4] = '~';
	map.array[5] = '*';
	map.array[6] = '*';
	map.array[7] = '*';
	map.array[8] = '*';
	map.array[9] = '\0';

	//[*][~][*]
	//[*][~][*]
	//[~][*][~]
	map1.array[0] = '*';
	map1.array[1] = '~';
	map1.array[2] = '*';
	map1.array[3] = '*';
	map1.array[4] = '~';
	map1.array[5] = '*';
	map1.array[6] = '~';
	map1.array[7] = '*';
	map1.array[8] = '~';
	map1.array[9] = '\0';

	//[~][~][*]
	//[*][*][~]
	//[*][*][*]
	map2.array[0] = '~';
	map2.array[1] = '~';
	map2.array[2] = '*';
	map2.array[3] = '*';
	map2.array[4] = '*';
	map2.array[5] = '~';
	map2.array[6] = '*';
	map2.array[7] = '*';
	map2.array[8] = '*';
	map2.array[9] = '\0';

	//ROW 2:

	//[*][*][~]
	//[*][~][*]
	//[~][*][~]
	map3.array[0] = '*';
	map3.array[1] = '*';
	map3.array[2] = '~';
	map3.array[3] = '*';
	map3.array[4] = '~';
	map3.array[5] = '*';
	map3.array[6] = '~';
	map3.array[7] = '*';
	map3.array[8] = '~';
	map3.array[9] = '\0';


	//[*][*][*]
	//[*][~][~]
	//[*][~][~]
	map4.array[0] = '*';
	map4.array[1] = '*';
	map4.array[2] = '*';
	map4.array[3] = '*';
	map4.array[4] = '~';
	map4.array[5] = '~';
	map4.array[6] = '*';
	map4.array[7] = '~';
	map4.array[8] = '~';
	map4.array[9] = '\0';


	//[*][~][*]
	//[*][~][~]
	//[*][*][*]
	map5.array[0] = '*';
	map5.array[1] = '~';
	map5.array[2] = '*';
	map5.array[3] = '*';
	map5.array[4] = '~';
	map5.array[5] = '~';
	map5.array[6] = '*';
	map5.array[7] = '*';
	map5.array[8] = '*';
	map5.array[9] = '\0';


	//ROW 3:

	//[*][*][*]
	//[*][~][~]
	//[~][~][*]
	map6.array[0] = '*';
	map6.array[1] = '*';
	map6.array[2] = '*';
	map6.array[3] = '*';
	map6.array[4] = '~';
	map6.array[5] = '~';
	map6.array[6] = '~';
	map6.array[7] = '~';
	map6.array[8] = '*';
	map6.array[9] = '\0';
	
	//[*][*][*]
	//[*][~][*]
	//[*][*][~]
	map7.array[0] = '*';
	map7.array[1] = '*';
	map7.array[2] = '*';
	map7.array[3] = '*';
	map7.array[4] = '~';
	map7.array[5] = '*';
	map7.array[6] = '*';
	map7.array[7] = '*';
	map7.array[8] = '~';
	map7.array[9] = '\0';

	//[*][~][*]
	//[*][~][*]
	//[*][~][~]
	map8.array[0] = '*';
	map8.array[1] = '~';
	map8.array[2] = '*';
	map8.array[3] = '*';
	map8.array[4] = '~';
	map8.array[5] = '*';
	map8.array[6] = '*';
	map8.array[7] = '~';
	map8.array[8] = '~';
	map8.array[9] = '\0';
	
//ASSIGNING KEYS ON BOARD

	//ROW 1:

	//[0][1][2]
	//[3][4][5]
	//[6][7][8]
	board.array[0] = '0';
	board.array[1] = '1';
	board.array[2] = '2';
	board.array[3] = '3';
	board.array[4] = '4';
	board.array[5] = '5';
	board.array[6] = '6';
	board.array[7] = '7';
	board.array[8] = '8';
	board.array[9] = '\0';	

	//[!]["][#]
	//[$][%][&]
	//[(][)][*]
	board1.array[0] = '!';
	board1.array[1] = '"';
	board1.array[2] = '#';
	board1.array[3] = '$';
	board1.array[4] = '%';
	board1.array[5] = '&';
	board1.array[6] = '(';
	board1.array[7] = ')';
	board1.array[8] = '*';
	board1.array[9] = '\0';	


	//[+][,][-]
	//[.][/][<]
	//[=][<][?]
	board2.array[0] = '+';
	board2.array[1] = ',';
	board2.array[2] = '-';
	board2.array[3] = '.';
	board2.array[4] = '/';
	board2.array[5] = '<';
	board2.array[6] = '=';
	board2.array[7] = '>';
	board2.array[8] = '?';
	board2.array[9] = '\0';	

	//ROW 2:

	//[a][b][c]
	//[d][e][f]
	//[g][h][i]
	board3.array[0] = 'a';
	board3.array[1] = 'b';
	board3.array[2] = 'c';
	board3.array[3] = 'd';
	board3.array[4] = 'e';
	board3.array[5] = 'f';
	board3.array[6] = 'g';
	board3.array[7] = 'h';
	board3.array[8] = 'i';
	board3.array[9] = '\0';	

	//[A][B][C]
	//[D][E][F]
	//[G][H][I]
	board4.array[0] = 'A';
	board4.array[1] = 'B';
	board4.array[2] = 'C';
	board4.array[3] = 'D';
	board4.array[4] = 'E';
	board4.array[5] = 'F';
	board4.array[6] = 'G';
	board4.array[7] = 'H';
	board4.array[8] = 'I';
	board4.array[9] = '\0';	

	//[j][k][l]
	//[m][n][o]
	//[p][q][r]
	board5.array[0] = 'j';
	board5.array[1] = 'k';
	board5.array[2] = 'l';
	board5.array[3] = 'm';
	board5.array[4] = 'n';
	board5.array[5] = 'o';
	board5.array[6] = 'p';
	board5.array[7] = 'q';
	board5.array[8] = 'r';
	board5.array[9] = '\0';	

	//ROW 3:

	//[J][K][L]
	//[M][N][0]
	//[P][Q][R]
	board6.array[0] = 'J';
	board6.array[1] = 'K';
	board6.array[2] = 'L';
	board6.array[3] = 'M';
	board6.array[4] = 'N';
	board6.array[5] = 'O';
	board6.array[6] = 'P';
	board6.array[7] = 'Q';
	board6.array[8] = 'R';
	board6.array[9] = '\0';	

	//[s][t][u]
	//[v][w][x]
	//[y][z][{]
	board7.array[0] = 's';
	board7.array[1] = 't';
	board7.array[2] = 'u';
	board7.array[3] = 'v';
	board7.array[4] = 'w';
	board7.array[5] = 'x';
	board7.array[6] = 'y';
	board7.array[7] = 'z';
	board7.array[8] = '{';
	board7.array[9] = '\0';	


	//[S][T][U]
	//[V][W][X]
	//[Y][Z][[]
	board8.array[0] = 'S';
	board8.array[1] = 'T';
	board8.array[2] = 'U';
	board8.array[3] = 'V';
	board8.array[4] = 'W';
	board8.array[5] = 'X';
	board8.array[6] = 'Y';
	board8.array[7] = 'Z';
	board8.array[8] = '[';
	board8.array[9] = '\0';	

	initscr();
	
	start_color();
	
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);

	display_board();

	while(loop != 0)
	{
		get_input();

		update_board();
		
		clear();

		refresh();
	
		display_board();
	}

	attrset(A_BOLD | A_BLINK | COLOR_PAIR(2));
	mvprintw(30, 83, "MINES HAVE BEEN CLEARED!\n");
	getch();
	endwin();
}
