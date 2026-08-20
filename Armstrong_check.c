#include<stdio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    int org=a;
    int sum=0;
    while (a!=0){
        int c=a%10;
        sum+=c*c*c;
        a=a/10;
    }

    if (sum==org)
        printf("this is a Armstrong number");

    else
        printf("this is not a Armstrong number");

}