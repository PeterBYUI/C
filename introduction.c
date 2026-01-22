#include <stdio.h>

int main() {
    printf("\tDear world,\n");
    printf("\tMy name is Pierre");

    char letter = 'p';
    printf("\n\tLet it be known that my favorite letter is %c", letter);

    char name[] = "Pierre";
    int age = 27;
    printf("\n\tMy name is %s and I am %d years old.", name, age);
    printf("\n\tI live in %s.", "Dijon");

    int x = -5;
    int y = 6;
    int sum = x + y;
    printf("\n\tResult: %d", sum);
    //Pick up at "Multiple variables"
    return 0;
}