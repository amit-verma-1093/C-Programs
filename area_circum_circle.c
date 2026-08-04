#include <stdio.h>
int main() {
    int radius;
    float pi = 3.14, area, circumference;
    printf("Enter the radius of circle: ");
    scanf("%d", &radius);
    area = pi * radius * radius;
    printf("The Area of circle is: %f", area);
    circumference = 2 * pi * radius;
    printf("\nThe Circumference of circle is: %f", circumference);
return 0;
}
