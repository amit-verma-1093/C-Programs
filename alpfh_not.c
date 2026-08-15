#include<stdio.h>

int main(){
    char chr;
    printf("enter the element: ");
    scanf("%c",&chr);
    if ((chr>='a' &&  chr<='z')||(chr>='A'&& chr<='Z'))
        printf("the element is an alphabet");
    else
        printf("the element is not an alphabet");

    return 0;
}