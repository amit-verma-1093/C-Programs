#include<stdio.h>
#include <stdbool.h> 
#include<string.h>

    int main() {
    char str[100];
    bool palindrome=true;
    printf("Enter string: ");
    scanf("%s",&str);

    int n=strlen(str);
    
    for(int i=0;i!=n/2;i++){
        if(str[i]!=str[n-i-1]){
            palindrome=false;
            break;
        }
    }
    if (palindrome){
        printf("palindrome");
    }
    else
        printf("not palindrome");
    return 0;
}