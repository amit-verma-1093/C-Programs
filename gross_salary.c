#include <stdio.h>

int main() {
    float basic, pf, bonus, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    pf = 0.12 * basic;
    bonus = 0.10 * basic;

    gross = basic + bonus - pf;
    printf("Gross Salary = %.2f", gross);

    return 0;
}