#include<stdio.h>
#include<stdlib.h>
int main(){
        int x=10,i;
        int* p=(int*)calloc (10,sizeof(int));
        for(i=0;i<10;i++){
                p[i]=i; /**(p+i) */
        }
        for(i=0;i<10;i++){
                printf("%d\t",p[i]);
        }
        printf("\n");
        return 0;
}
