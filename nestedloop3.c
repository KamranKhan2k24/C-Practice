#include<stdio.h>
int main() {
    int i,j;
    for(i=0;i<5;i++){
        if(i==2)break;
        for(j=0;j<5;j++){
            
            printf("i= %d\tj= %d\n", i,j);
        }
    }
    return 0;
    }
   