#include <stdio.h>

int main () {

    double num1, num2;
    printf ("Enter num1 : ");
    scanf ("%lf", &num1);

    printf ("Enter num2 : ");
    scanf ("%lf", &num2);

    if (num1 > num2) {
        printf ("The bigger number is num1 : %.2lf\n", num1);
    } else if (num1 < num2) {
        printf ("The bigger number is num2 : %.2lf\n", num2);
    } else  {
        printf ("Numbers are equal\n");
    }

    return 0;
}