#include<stdio.h>
int main(){
    unsigned int x;
    printf("Enter a positive number: ");
    scanf("%u",&x);
    int count =0;

    while(x!=0){
        if ((x&1)==1){
            count++;
        }
        x=x>>1;
    }
    printf("Number of ones =%d\n",count);
    return 0;
}