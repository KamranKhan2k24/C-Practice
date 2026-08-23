#include<stdio.h>
int main(){
    unsigned int x;
    printf("Enter a positive number: ");
    scanf("%u",&x);
    
    if ((x & (x-1))==0){
        printf("Number is in power of 2\n");
    } else{
        printf("Number is not in power of 2\n");
    }
    return 0;
}