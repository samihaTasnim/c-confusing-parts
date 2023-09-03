#include <stdio.h>

int main (void) {
  int i, j;

  i = 10;
  j = i++;

  // first, the current value of i is assigned to j. then i is incremented
  printf("i = %d, j = %d \n", i, j);
  // prints i = 11, j = 10 

  int k,l;
  k = 10;
  l = ++k;
  printf("k = %d, l = %d \n", k, l);
  // prints k = 11, l = 11
  return 0;
}