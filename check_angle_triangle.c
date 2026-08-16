#include <stdio.h>

int main() {
    float angle1, angle2, angle3, sum;

    printf("Enter three angles of the triangle: ");

    scanf("%f%f%f", &angle1,&angle2,&angle3);
  
    sum = angle1 + angle2 + angle3;

    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
        printf("The triangle is valid.");
    else 
        printf("The triangle is NOT valid.");
    
    return 0;
}