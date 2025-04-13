// Basic mathematic operations
// Towards the bottom I show the use of the math.h library

#include <stdio.h>
#include <math.h>

int main() {
    int x = 5;
    int y = 2;

    int z = x + y;
    printf("The sum of x and y is: %d\n", z);

    int z2 = x - y;
    printf("The diff of x and y is: %d\n", z2);

    int z3 = x * y;
    printf("The product of x and y is: %d\n", z3);

    int z4 = x / y;
    printf("x divided by y is: %d\nWait that isn't correct...It's because it's stored as an int\n", z4);

    float z5 = x / y;
    printf("If we store the value as a float it's now: %f\nStill wrong...\n", z5);

    int x2 = 5;
    float y2 = 2;
    float z6 = x2 / y2;
    printf("If one's a float and one's an int then: %.1f\n", z6);

    // You can also put a proceeding float or double in the equation
    float z7 = x / (float) y; // y is still an int but for this equation it's passed as a float
    printf("This works too: %.1f\n", z7);

    // The modulus % operator gives us the remainder
    int z8 = x % y;
    printf("The remainder is %d\n", z8);

    // Increment and Decrement by 1
    printf("x is initially: %d\n", x);
    printf("y is initially: %d\n", y);
    x++;
    y--;
    printf("x increment one is: %d\n", x);
    printf("y decrement one is: %d\n", y);

    // Augmented assignment operator, this is += -= *= /= and %=
    x += 3;
    y += 20;
    printf("Now x and y are: %d and %d\n", x, y);
    x *= 10;
    y /= 7;
    printf("Now x and y are: %d and %d\n", x, y);

    // Using the math.h library to do more math
    double A = sqrt(9); // Square root
    double B = pow(2, 4); // This is 2 to the power of 4
    int C = round(3.14); // Round
    int D = ceil(3.14); // Round up
    int E = floor(3.99); // Round down
    double F = fabs(-100); // Abs value
    double G = log(3); // Find the log of a number
    double H = sin(45); // Trig
    double I = cos(45);
    double J = tan(45);

    return 0;
}