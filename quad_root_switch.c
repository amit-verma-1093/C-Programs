#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, real, imag;
    int choice;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
        choice = 1;
    else if (d == 0)
        choice = 2;
    else
        choice = 3;

    switch (choice) {

        case 1:
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);

            printf("Two real and different roots\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;

        case 2:
            root1 = -b / (2 * a);

            printf("Two real and equal roots\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
            break;

        case 3:
            real = -b / (2 * a);
            imag = sqrt(-d) / (2 * a);

            printf("Complex roots\n");
            printf("Root 1 = %.2f + %.2fi\n", real, imag);
            printf("Root 2 = %.2f - %.2fi\n", real, imag);
            break;
    }

    return 0;
}