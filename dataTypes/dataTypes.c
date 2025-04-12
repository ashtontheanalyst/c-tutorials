#include <stdio.h>
#include <stdbool.h>  // This is so we can use boolean data

int main() {
    char a = 'C'; // single char %c
    char b[] = "Bro"; // array of char's, a string %s
    
    float c = 3.141592653589793; // int with decimal points 6-7 digits %f
    // notice the float can't handle it and the print value shows its wrong
    double d = 3.141592653589793; // a float with more precision, 15-16 digits %lf
    printf("%f\n", c);
    printf("%0.15f\n", c); // the 0.15 means show 15 digits after 0, notice why we need the long float (double)
    printf("%0.15f\n", d);

    bool e = true; // true or false, needs #include <stdbool.h> %d

    // ASCII, char as # or ltter-ish
    char f = 100; // %d in print shows the number, %c shows the ASCII assigned val. (-128 to 127)
    printf("%d\n", f);
    printf("%c\n", f);
    unsigned char g = 255; // unsigned drops the negative sign and just gets the val (0 to 255)

    short h = 32767; // (-32,768 to 32,767) %d
    unsigned short i = 65535; // (0 to 65535) %d

    int j = 2094482045; // From around -2 billion to 2 billion %d
    unsigned int k = 4158294025; // 0 to around 4 billion %u

    long long int l = -8500000000000000000; // neg. 9 quintillion to 9 quin. %lld
    unsigned long long int m = 17300000000000000000; // 0 to 18 quin. %11u

    return 0;
}