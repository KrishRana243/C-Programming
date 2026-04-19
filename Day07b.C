// Guess The Number Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int random_no = 0;
  int guess = 0;
  int numberOfGuesses;
  time_t t;

  // Intializes random number generator
  srand((unsigned) time(&t));

  random_no = rand() % 21; // Generates a random number between 0 and 20

  printf("This is a Guessing Game\n");
  printf("I have selected a random number between 0 and 20. Can you guess it?\n");

  for(numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses)
  {
    printf("You have %d tr%s left. Enter your guess: ", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
    printf("Your guess: ");
    scanf("%d", &guess);

    if(guess == random_no)
    {
      printf("\nCongratulations! You guessed the number correctly.\n");
      return 0;
    }
    else if(guess < 0 || guess > 20)
    {
      printf("\nInvalid guess! Please enter a number between 0 and 20.\n");
    }
    else if(guess < random_no)
    {
      printf("\nSorry, %d is wrong. Too low! Try again.\n", guess);
    }
    else if (guess > random_no)
    {
      printf("Sorry, %d is wrong. Too high! Try again.\n", guess);
    }
  }
  printf("\nYou've had 5 tries and you failed to guess the number.\n");
  printf("The correct number was: %d\n", random_no);

  return 0;

} 
