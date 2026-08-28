#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String after removing vowels: ");

    for (int i = 0; str[i] != '\0'; i++) {

        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                break;

            default:
                printf("%c", str[i]);
        }
    }
    
    return 0;
}