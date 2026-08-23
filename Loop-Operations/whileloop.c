#include<stdio.h>
int main(){
    int i=10;
    while(i<5){
        printf("This code will not get executed");
        i++;
    }
    printf("This code will get executed");
    return 0;
}