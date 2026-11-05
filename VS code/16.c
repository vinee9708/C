#include <stdio.h>
#include <math.h>

int main() {

    int P, R, T;
    int A;

    printf("Enter the principal amount: ");
    scanf("%d", &P);

    printf("Enter the rate of interest: ");
    scanf("%d", &R);

    printf("Enter the time period: ");
    scanf("%d", &T);

    A = P * pow(1 + R / 100.0, T);

    printf("Final amount is %d\n", A);
    printf("The compound interest is %d", A - P);

    return 0;
}