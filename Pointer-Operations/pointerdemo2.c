#include<stdio.h>
int main(){
        int x =10;
        int y = &x;
        int* p=&x;
        printf("x=%d\n",*p);
        printf("x=%d\n",*y);
        return 0;
}
