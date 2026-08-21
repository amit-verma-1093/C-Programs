#include<stdio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    
    
    while(a>9){
        int num=a;
        int total=0;
        while(num!=0){
            int rem=num%10;
                total+=rem;
                num=num/10;
        }
        a=total;
    }
    printf("the generic root is :%d",a);
    return 0;

}