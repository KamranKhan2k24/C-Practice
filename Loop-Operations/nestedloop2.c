#include<stdio.h>
int main() {
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if (j==2) break;
            printf("i= %d\tj= %d\n", i,j);
        }
    }
    return 0;
}
   