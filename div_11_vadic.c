#include <stdio.h>

int main() {
    int n, digit;
    int oddSum = 0, evenSum = 0;
    int position = 1;
    int difference;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (position % 2!=0)
            oddSum += digit;
        else
            evenSum += digit;

        n = n / 10;
        position++;
    }

    difference = oddSum - evenSum;

    if (difference < 0)
        difference = -difference;

    if (difference % 11 == 0)
        printf("Number is divisible by 11");
    else
        printf("Number is not divisible by 11");

    return 0;
}