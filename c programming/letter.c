#include <stdio.h>

int main () {

    char letter;
    printf ("Enter the letter : ");

    do {
        scanf ("%c", &letter);
    } while (!(((letter >= 65) && (letter <= 90)) || ((letter >= 97) && (letter <= 122))));

    if (letter == 65 || letter == 69 || letter == 73 || letter == 79 || letter == 85 || letter == 89 ||
             letter == 97 || letter == 101 || letter == 105 || letter == 111 || letter == 117 || letter == 121) {
                printf ("The letter is vowel\n");
    } else {
        printf ("The letter is constant\n");
    }

    return 0;
}