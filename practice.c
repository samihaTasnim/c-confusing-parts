#include <stdio.h>

int main (void) {
  int i,j;
  printf("Enter first num: ");
  scanf("%i", &i);
    printf("Enter second num: ");
  scanf("%i", &j);

  printf("i < j %i\n", i < j);
  printf("i > j %i\n", i > j);
  return 0;
}