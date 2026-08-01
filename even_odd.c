#include<stdio.h>
int main(){

    int n;

    printf("Enter a positive number:");
    scanf("%d",&n);

    if (n & 1){
        printf("Number is odd\n");
    }else{
        printf("Number is even\n");
    }
    return 0;
}