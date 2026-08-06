#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f", simpleInterest);

    return 0;
}