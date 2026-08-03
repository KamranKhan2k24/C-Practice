#include<stdio.h>
int main(){
        int x=10;
        int* p= &x;

        printf("x=%d\n",*p);
        *p =25;
        printf("x=%d\n",x);
        return 0;
}
