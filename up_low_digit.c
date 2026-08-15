#include<stdio.h>
int main(){
    char chr;
    printf("enter the element: ");
    scanf("%c",&chr);
    if (chr>='A'&& chr<='Z')
        printf("the element is in Upper case");
    else if (chr>='a' &&  chr<='z')
        printf("the element is in Lowercase");
    else if (chr>='0' && chr<='9')
        printf("the element is Digit");
    else
        printf("the element is special character");
    return 0;
}