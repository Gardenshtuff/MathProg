#include "bigmathlib.h"


int nFactorial(int n)
{
    int ret = n;
    while(n>1){
        ret *= --n;
    }
    return ret;
}

int nChooseK(int n, int k)
{
	return nFactorial(n)/(nFactorial(k)*nFactorial(n-k));
}


//	STATISTICS
double Poisson(int i, int a)
{
	return pow(a, i)*exp(-a)/(nFactorial(i));
}	