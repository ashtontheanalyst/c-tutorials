// vairables are allocated space in memory to store values

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

    return 0;
}