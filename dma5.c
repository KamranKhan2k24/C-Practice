#include<stdio.h>
#include<stdlib.h>
int main(){
        int* p=(int*)malloc (sizeof(int));
        *p=20;
        printf("%d\n",*p);
        char *q=(char*)realloc(p,sizeof(char));
        printf("%d\n",*q);
        return 0;
}

