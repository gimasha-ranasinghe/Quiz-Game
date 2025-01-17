#include <stdio.h>

// Function to ask easy questions
void askEasyQuestions(int *score) {
    int answer;

    // Question 1
    printf("\nQuestion 1: What is the correct syntax to print \"Hello, World!\" in C?\n");
    printf("1) printf(\"Hello, World!\");\n2) print(\"Hello, World!\");\n3) printf(\"Hello World!\");\n4) print(\"Hello World!\");\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        *score += 5;
    } else {
        printf("Wrong! The correct answer is 1) printf(\"Hello, World!\");\n");
    }

    // Question 2
    printf("\nQuestion 2: Which operator is used to access a member of a structure in C?\n");
    printf("1) .\n2) ->\n3) ::\n4) ::>\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        *score += 5;
    } else {
        printf("Wrong! The correct answer is 2) ->\n");
    }

    // Question 3
    printf("\nQuestion 3: What is the correct way to declare a pointer in C?\n");
    printf("1) int *ptr;\n2) int ptr*;\n3) pointer int *ptr;\n4) int ptr;\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        *score += 5;
    } else {
        printf("Wrong! The correct answer is 1) int *ptr;\n");
    }

    // Question 4
    printf("\nQuestion 4: Which of the following is a valid way to allocate memory dynamically for an integer array of size 5?\n");
    printf("1) int *arr = malloc(5 * sizeof(int));\n2) int arr = malloc(5 * sizeof(int));\n3) int arr[5] = malloc(sizeof(int));\n4) int *arr = malloc(5 * int);\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        *score += 5;
    } else {
        printf("Wrong! The correct answer is 1) int *arr = malloc(5 * sizeof(int));\n");
    }

    // Question 5
    printf("\nQuestion 5: What is the result of the following expression: 3 + 2 * 2?\n");
    printf("1) 7\n2) 10\n3) 5\n4) 8\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        *score += 5;
    } else {
        printf("Wrong! The correct answer is 1) 7.\n");
    }

}

// Function to ask hard questions
void askHardQuestions(int *score) {
    int answer;

    // Question 6
    printf("\nQuestion 6: What is the value of Pi (approximately)?\n");
    printf("1) 3.14\n2) 3.15\n3) 3.12\n4) 3.16\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        *score += 10;
    } else {
        printf("Wrong! The correct answer is 1) 3.14.\n");
    }

    // Question 7
    printf("\nQuestion 7: What is the size of an integer variable in most systems (assuming 32-bit)?\n");
    printf("1) 2 bytes\n2) 4 bytes\n3) 8 bytes\n4) 16 bytes\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        *score += 10;
    } else {
        printf("Wrong! The correct answer is 2) 4 bytes.\n");
    }

    // Question 8
    printf("\nQuestion 8: What is the correct way to write a `for` loop in C?\n");
    printf("1) for (i = 0; i < 5; i++)\n2) for i = 0 to 5\n3) for (i < 5; i++)\n4) for (i = 0, i < 5)\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        *score += 10;
    } else {
        printf("Wrong! The correct answer is 1) for (i = 0; i < 5; i++)\n");
    }

    // Question 9
    printf("\nQuestion 9: What is the output of the following C code?\n");
    printf("#include <stdio.h>\nint main() {\n    int x = 5;\n    printf(\"%%d\\n\", ++x);\n    return 0;\n}\n");
    printf("1) 5\n2) 6\n3) 4\n4) Error\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        *score += 10;
    } else {
        printf("Wrong! The correct answer is 2) 6.\n");
    }

    // Question 10
    printf("\nQuestion 10: Which header file is required for using the `malloc()` function in C?\n");
    printf("1) <stdio.h>\n2) <stdlib.h>\n3) <malloc.h>\n4) <string.h>\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        *score += 10;
    } else {
        printf("Wrong! The correct answer is 2) <stdlib.h>.\n");
    }

}

// Function to display the total score
void displayTotalScore(int score) {
    printf("\n==========================\n");
    printf("Your total score is: %d\n", score);
    if (score = 75) {
        printf("Excellent performance! You are a quiz master!\n");
    } else if (score >= 50) {
        printf("Good job! Keep practicing to improve.\n");
    } else {
        printf("Better luck next time! Keep learning.\n");
    }
    printf("==========================\n");
}
