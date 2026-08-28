#include<stdio.h>
#include<stdlib.h>
int main(){
        int x=10;
        int* p=(int*)malloc (sizeof(int));
        *p=++x;
        printf("Value at p=%d\n",*p);
        return 0;
}
