#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int numToGuess = rand() % 100 + 1;

	printf("Welcome to the number guessing game!\n\n");

	int userGuess = 0;

	int guessNo = 1;

	do {
		printf("Guess No %d", guessNo);

		printf("\nEnter a guess: \n");

		scanf("%d", &userGuess);

		if (userGuess == numToGuess) {
			printf("\nWell Done! You Guessed Correctly!\nYou guessed it in %d", guessNo);
			printf(" guesses\n\nHope to see you again soon!\n");
		} else if (userGuess > numToGuess) {
			printf("\nWrong Guess! Too High!\n\n");
			guessNo++;
		} else {
			printf("\nWrong Guess! Too Low!\n\n");
			guessNo++;
		}
	} while (userGuess != numToGuess);
}
