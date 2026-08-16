#include<stdio.h>

int main(){
    int d,m;

    printf("enter the date,month: ");
    scanf("%d%d",&d,&m);
  
    if ((d>=1 && d<=31) && (m>=1 && m<=12))
        printf("valid date and month");
    
    else if ((m<=1 || m>=12) && (d>=1 && d<=31))
        printf("invalid month");
    else if ((d<=1 || d>=31)&&(m>=1 && m<=12))
        printf("invalid date");
    else if ((m<=1 || m>=12)&&(d<=1 || d>=31)) 
        printf("invalid date and month");
    
    return 0;
}