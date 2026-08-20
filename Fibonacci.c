#include<stdio.h>

int main(){
    int a=0;
    int b=1;
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        printf("%d ",a);
        int next=a+b;
        a=b;
        b=next;   
    }
    return 0;
}