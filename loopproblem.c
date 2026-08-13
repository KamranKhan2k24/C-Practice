//This code calculates the factorial of a given positive integer using an iterative approach. 
//It prompts the user to enter a positive number, computes its factorial using a loop, and then prints the result.  

#include<stdio.h>
        int fact(unsigned int);
int main(){
        unsigned int n;
        printf("Enter the positive number");
        scanf("%u",&n);
        int result=fact(n);
        printf("Fcatorial of %u is %d\n",n,result);
        return 0;
}
int fact(unsigned int n){
        int result =1;
        int i;
        for(i=2;i<=n;i++){
                result=result*i;
        }
        return result;
}
