// vairables are allocated space in memory to store values
// constants are variables that we don't want to be changed (good practice to ALL CAPS)

#include <stdio.h>

int main() {
    int x; // declaring the variable of type int
    x = 100; // initializing the variable, assigning the value to the memory

    int y = 25; // both at the same time

    float gpa = 3.99; // Floating point number, has a decimal portion
    char grade = 'A'; // stores a single letter
    char name[] = "John Doe"; // there is no string in c so you must make a char array

    printf("Your gpa is %f\n", gpa); // %f is a place holder for a float var
    printf("Are you %d years old?\n", y); // %d is for an int
    printf("Hello %s\n", name); // %s is for string (really a char array)
    printf("A(n) %C is a great grade!\n", grade); // %C for a char

    // constants need to be declared:
    const float PI = 3.14159;
    printf("The value of pi is: %.5f\n", PI);

    // PI = 4.14159; This won't work since it's a constant

    return 0;
}