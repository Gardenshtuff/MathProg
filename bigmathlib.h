#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
//#include <curses.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

# define COMPLENGTH 10
# define EXPRLENGTH 50

int nFactorial(int n);
int nChooseK(int n, int k);

//	STATISTICS
double Poisson(int i, int a);