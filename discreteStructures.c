#include "discreteStructures.h"

int nFactorial(int n)
{
    int ret = n;
    while(n>1){
        ret *= --n;
    }
    return ret;
}

int nPermK(int n, int k){
  return nFactorial(n)/nFactorial(n-k);
}

int nChooseK(int n, int k)
{
    return nPermK(n, k)/nFactorial(k);
}
