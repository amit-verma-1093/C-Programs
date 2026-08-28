#include<stdio.h>

int main() {
    int a[50],pos,element,n;
    printf("enter the number of element: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element: ");
    scanf("%d",&element);
    printf("enter the position: ");
    scanf("%d",&pos);

    for (int i=n;i>=pos;i--){
        a[i]=a[i-1];

    }
    a[pos-1]=element;
    n++;
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}