//This code calculates the sum of all positive integers up to a given positive integer using an iterative approach.
//It prompts the user to enter a positive number, computes the sum using a loop, and then prints the result.

#include<stdio.h>
        int sum(unsigned int);
int main(){
        unsigned int n;
        printf("Enter the positive number");
        scanf("%u",&n);
        int result=sum(n);
        printf("Sum of %u is %d\n",n,result);
        return 0;
}
int sum(unsigned int n){
        int result=0;
        int i;
        for(i=1;i<=n;i++){
                result=result+i;
        }
        return result;
}
