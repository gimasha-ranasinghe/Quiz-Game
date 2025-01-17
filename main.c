#include <stdio.h>
#include <stdlib.h>

void askEasyQuestions(int *score);
void askHardQuestions(int *score);
void displayTotalScore(int score);

int main() {
    int score = 0;

    printf("Welcome to the Quiz Game!\n");

    printf("\nLet's Start with Easy Questions (5 marks each):\n");
    askEasyQuestions(&score);

    printf("\nNow Moving to Hard Questions (10 marks each):\n");
    askHardQuestions(&score);

    displayTotalScore(score);

    return 0;
}
