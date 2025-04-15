// Basic if statement and else if
// Below that is logcial operators: &&, ||, !, etc.

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    // Example, if age is equal or more than 18 for applying for credit card
    if (age >= 18) {
        printf("You are now signed up\n");
    }
    else if (age < 0) {
        printf("You're trying to cheat the system\n");
    }
    else if (age == 0) {
        printf("You can't sign up ypu were just born\n");
    }
    else {
        printf("You must be 18 to apply for a credit card\n");
    }

    // Logical Operators ------------------------------------------------------------------------
    float temp = 10;
    bool sunny = true;

    // && means two or more conditions together
    if(temp >= 0 && temp <= 30 && sunny == true) {
        printf("\nThe weather is good\n");
    }
    else {
        printf("\nThe weather is bad\n");
    }

    // Using ||----------------------------------------------------------------------------------
    float score = 30;
    bool playing = false;

    if(score < 0 || playing == false) {
        printf("\nGame is over\n");
    }
    else {
        printf("\nKeep going!\n");
    }

    // Using the ! ------------------------------------------------------------------------------
    // The logic is wrong but the opeators were used so it's all good... Bob Ross function...
    int guess;
    
    printf("\nGuess a number 1-10: ");
    scanf("%d", &guess);

    if (guess != 5 || guess != 10) {
        printf("\nYour number %d is not divisible by 5\n", guess);
    }
    else if (guess != 3 || guess != 6 || guess != 9) {
        printf("\nYour guess %d is not divisible by 3\n", guess);
    }
    else {
        printf("\nGood guess\n");
    }


    return 0;
}