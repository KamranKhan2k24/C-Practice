#include<stdio.h>
int main(){
        int x=10,y=20,temp;
        printf("x=%d\ty=%d\n",x,y);
        temp=x;
        x=y;
        y=temp;
        printf("x=%d\ty=%d\n",x,y);
        return 0;
}
