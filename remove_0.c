#include<stdio.h>

int main() {
    int arr[10]={0, 5, 0, 3, 8, 0, 2, 0,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp,j=0;
    for (int i=0;i<size;i++){
        if (arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
        
    }
    for (int i=0; i<j;i++)
        printf("%d\t",arr[i]);
    return 0;
}