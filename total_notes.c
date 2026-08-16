#include <stdio.h>

int main() {
    int amount;
    int n2000 = 0, n500 = 0, n200 = 0, n100 = 0, n50 = 0,n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    int total_notes = 0;

    printf("Enter the total amount: ");
    scanf("%d", &amount);


    if (amount < 0) {
        printf("Invalid amount! Please enter a positive value.");
        return 1; 
    }

    if (amount >= 2000) {
        n2000 = amount / 2000;
        amount = amount % 2000; 
    }
    if (amount >= 500) {
        n500 = amount / 500;
        amount = amount % 500;
    }
    if (amount >= 200) {
        n200 = amount / 200;
        amount = amount % 200;
    }
    if (amount >= 100) {
        n100 = amount / 100;
        amount = amount % 100;
    }
    if (amount >= 50) {
        n50 = amount / 50;
        amount = amount % 50;
    }
    if (amount >= 20) {
        n20 = amount / 20;
        amount = amount % 20;
    }
    if (amount >= 10) {
        n10 = amount / 10;
        amount = amount % 10;
    }
    if (amount >= 5) {
        n5 = amount / 5;
        amount = amount % 5;
    }
    if (amount >= 2) {
        n2 = amount / 2;
        amount = amount % 2;
    }
    if (amount >= 1) 
        n1 = amount;
    

    total_notes = n2000 + n500 + n200 + n100 + n50 + n20 + n10 + n5 + n2 + n1;

    if (n2000 > 0) 
    printf("2000 notes: %d\n", n2000);
    if (n500 > 0)  
    printf("500 notes: %d\n", n500);
    if (n200 > 0)  
    printf("200 notes: %d\n", n200);
    if (n100 > 0)  
    printf("100 notes: %d\n", n100);
    if (n50 > 0)   
    printf("50 notes: %d\n", n50);
    if (n20 > 0)   
    printf("20 notes: %d\n", n20);
    if (n10 > 0)   
    printf("10 notes: %d\n", n10);
    if (n5 > 0)    
    printf("5 notes: %d\n", n5);
    if (n2 > 0)    
    printf("2 notes: %d\n", n2);
    if (n1 > 0)    
    printf("1 notes: %d\n", n1);
    
    printf("Total number of notes: %d", total_notes);
    return 0;
}