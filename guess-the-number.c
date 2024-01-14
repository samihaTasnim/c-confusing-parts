// mastery skills check 2.7 chapter

#include <stdio.h>

int main (void) {
  
  int magic = 67;
  int i;
  int guess;

  for(i = 0; i < 10; i++) {
    printf("Enter your guess: ");
    scanf("%i", &guess);
    if(guess == magic) {
      printf("You guessed it right! \n");
      break;
    } 
    else {
      int leftMoves = 9 - i;
      printf("Your guess was wrong! %i tries left. \n", leftMoves);
    }
  }

return 0;
}