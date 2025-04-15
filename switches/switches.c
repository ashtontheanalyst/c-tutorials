#include <stdio.h>

int main() {
    // A switch is a more efficient way of doing else if statements
    char grade;

    printf("\nEnter your grade: ");
    scanf("%c", &grade);

    // This is essentially just a bunch of else if statements based on what char grade is
    switch(grade) {
        case 'A':
            printf("Perfect!\n");
            break; // We add break so we exit the switch loop when case is met
        case 'B':
            printf("You did good\n");
            break;
        case 'C':
            printf("C's get degrees\n");
            break;
        case 'D':
            printf("You're cooked\n");
            break;
        default: // If no other cases match, do this
            printf("Whatever that grade is, it probably isn't good...\n");
            break;
    }

    return 0;
}