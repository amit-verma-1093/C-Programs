#include<stdio.h>
int main(){
    char chr;
    printf("enter the element: ");
    scanf("%c",&chr);
    if (chr>='A'&& chr<='Z')
        printf("the element is in Upper case");
    else
        printf("the element is in Lower case");
    return 0;
}