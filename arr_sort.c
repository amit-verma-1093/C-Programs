#include<stdio.h>
int asc( int a[],int size);
int dec(int a[],int size);
int display(int a[],int size);
int main(){
    int a[]={2,5,3,4,6,4};
    int size = sizeof(a) / sizeof(a[0]);
    printf("Original array: ");
    display(a, size);

    asc(a,size);
    printf("Ascending order: ");
    display(a, size);

    dec(a,size);
    printf("Descending order: ");
    display(a,size);

    return 0;
}
int asc(int a[],int size){
    int temp;
    for (int i=0;i<size-1;i++){
        for (int k=i;k<size;k++){
            if (a[i]>a[k]){
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
        }
        
    }
}
int dec(int a[],int size){
    int temp;
    for (int i=0;i<size-1;i++){
        for (int k=i;k<size;k++){
            if (a[i]<a[k]){
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
        }
        
    }
}
int display(int a[], int size){
    for (int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
