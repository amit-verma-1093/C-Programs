#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter three sides of the triangle:");
    scanf("%f%f%f", &side1,&side2,&side3);
    
    if (side1 == side2 && side2 == side3) 
        printf("The triangle is an Equilateral triangle.");
    
    else if (side1 == side2 || side2 == side3 || side1 == side3) 
        printf("The triangle is an Isosceles triangle.");
    
    else 
        printf("The triangle is a Scalene triangle.");

    return 0;
}