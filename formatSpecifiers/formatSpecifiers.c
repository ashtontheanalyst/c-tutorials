#include <stdio.h>

int main() {
    // Format specifier % defines and formats a type of data to be displayed

    // %c = char
    // %s = string (array of chars)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = min field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%f\n", item1);
    printf("Item 1: $%.2f\n\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 2: $%8.2f\n", item2);
    printf("$%-8.2f for item 2\n", item2);

    return 0;
}