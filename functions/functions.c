// Invoking a function is the same as calling and running it
// A function is basically just a subsection of code that does something
// Functions can't see inside functions, unless you pass them...
#include <stdio.h>

// void means it doesn't return anything
void birthdaySong() {
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to YOU!!");
    printf("\nHappy birthday dear.....SOMEONE");
    printf("\nHappy birthday to you\n");
}

// This function takes in parameters, notice the data type is re-declared
// The parameter names here in the function don't have to be the same as the ones passed, I could have put: char someone[], int number
void birthdayPrompt(char name[], int age) {
    printf("\nHappy birthday %s!\n", name);
    printf("You are turning %d years old\n", age);
}

// Example of a function returning something instead of just a void fn
double square(double x) {
    return x * x;
}

// Function to find the max of two integers, returning from an if/else
int findMax(int x, int y) {
    if(x > y) {
        return x;
    } else {return y;}
}

// Ternary operator, shortcut for an if/else
// Format is this: (condition) ? value if true : value if false
int findMaxOpt(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    char name[] = "John";
    int age = 20;

    birthdaySong(); // Invoking the birthday song

    // Arguments are what you send a function, parameters are what a function expects when it's invoked
    birthdayPrompt(name, age); // passing two values from main to the function above

    // We want a function that squares an argument and returns it to main
    double x = 3.1415;
    double x1 = square(x);
    printf("\nThe value of %.4lf squared is: %.4lf\n", x, x1);

    // Function for max
    int max = findMax(3, 40);
    printf("\n%d\n", max);

    // Optomized with the ternary operator
    int maxOpt = findMaxOpt(3, 40);
    printf("\n%d\n", maxOpt);

    return 0;
}