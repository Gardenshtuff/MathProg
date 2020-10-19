#include<iostream>
#include <ncurses.h>
using namespace std;
main() 
{
	initscr();
	cbreak();
	noecho();
	kepad(stdscr, TRUE);
	
	cout << "Hello World. This is C++ program" << endl;
   
	endwin();
}