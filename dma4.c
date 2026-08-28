#include<stdio.h>
#include<stdlib.h>
int main(){
        int* p=(int*)malloc (sizeof(int));
        *p=20;
        printf("%d\n",*p);
        free(p);
        /*p=Null*/
        printf("%d\n",*p);
        return 0;
}
