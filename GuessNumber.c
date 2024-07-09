#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess, tries = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number(between 1 and 100):\n");

    do {
        scanf("%d", &guess);
        tries++;
        if (guess > number){
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number in %d tries.\n",tries);
        }

    } while (guess != number);

    return 0;
}