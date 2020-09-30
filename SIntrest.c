#include <stdio.h>

int main() {
    int principal,rate,time,amount;
    printf("What is the principal:");
    scanf("%d",&principal);
    printf("What is the rate:");
    scanf("%d",&rate);
    printf("What is the time:");
    scanf("%d",&time);
    amount=(principal*rate*time)/100;
    printf("SimpleIntrest is: %d",amount);
    return 0;
}