#include <stdio.h>
#include <string.h> // Needed for the name[str...] line

int main() {
    int age;
    char name[25]; // We have to set a limit on the size of the "string" at compile time, not dynamic yet...
    
    // Doing it with a string
    printf("\nWhat's your name? ");
    fgets(name, 25, stdin); // fgets() will read past white space, whereas scanf won't. It also puts a \n which in some cases must be deleted
    name[strlen(name)-1] = '\0'; // This gets rid of the newline character so it can print name
    printf("So your name is %s\n", name);
    
    // With an int
    printf("\nHow old are you? ");
    scanf("%d", &age); // This is like the opposite of printf, accepts user input
    // You need to use the address of operator in order to use scanf
    printf("You are %d years old\n", age);
 
    return 0;
}