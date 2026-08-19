#include<stdio.h>
int main(){
        int x=20;
        int* const p=&x;
        printf("x=%d\tx=%d\n",x,*p);
        x=40;
        *p =45; 
        printf("x=%d\tx=%d\n",x,*p);
        int k =50;
        /* p=&k;
        printf("x=%d\tk=%d\n",x,*p);*/
        return 0;
}
