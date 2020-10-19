#include<iostream>
#include <curses.h>
using namespace std;
int main() 
{
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	
	//WINDOW * win = newwin(nlines, ncols, y0, x0);
	cout << "Hello World. This is C++ program" << endl;
   
	endwin();
}
