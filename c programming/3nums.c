#include <stdio.h>

int main () {

    double num1, num2, num3;
    printf ("Enter num1 : ");
    scanf ("%lf", &num1);

    printf ("Enter num2 : ");
    scanf ("%lf", &num2);

    printf ("Enter num3 : ");
    scanf ("%lf", &num3);

    if (num1 != num2 && num1 != num3 && num2 != num3) {
        printf ("Numbers are different\n");
        return 1;
    }

    if ((num1 == num2) && num1 > num3) {
        printf ("%.2lf\n", num1);
    } else if (num3 > num1) {
        printf("%.2lf\n", num3);
    }

    if ((num1 == num3) && num3 > num2) {
        printf ("%.2lf\n", num3);
    } else if (num2 > num3) {
        printf ("%.2lf\n", num2);
    }

    if ((num2 == num3) && num2 > num1) {
        printf ("%.2lf\n", num2);
    } else if (num1 > num3) {
        printf ("%.2lf\n", num1);
    } 

    

    if (num1 == num2 && num1 == num3 && num2 == num3) {
        printf ("All numbers are equal\n");
    }

    return 0;
}