#include<stdio.h>
int main(){

    int n;
    printf("Enter a positive number:");
    scanf("%d",&n);

    if ((n&(n-1))== 0){
        int pos = 0;

        while (n!=0){
            pos ++;
            n=n>>1;
        }
        if ((pos &1)==1){
            printf("Number is in power of 4\n");
        }else{
            printf("Number is not in power of 4\n");
        }
    }   else{
        printf("Number is not in power of 4\n");
    }
    return 0;
}