#include<stdio.h>
int main(){
    int a , rem , rev_num=0;

    printf("enter the number: ");
    scanf("%d",&a);
    int org=a;
    while(a!=0){
        rem=a%10;
        rev_num=rev_num*10 + rem;
        a=a/10;
    }
    if (org==rev_num)
        printf("it is a palindrome number");
    else
        printf("it is not a palindrome number");
}