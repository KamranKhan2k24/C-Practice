#include<stdio.h>
int main(){
    unsigned int x;
    printf("Enter a positive number: ");
    scanf("%u",&x);
    int count =0;

    while(x){
        count++;
        x=x & (x-1);
    }
    printf("Number of ones =%d\n",count);
    return 0;
}