#include<stdio.h>
void swap(int,int);
int main(){
        int x=10,y=20,temp;
        printf("x=%d\ty=%d\n",x,y);
        swap(x,y);
        printf("x=%d\ty=%d\n",x,y);
        return 0;
}
void swap(int a ,int b){
        int temp;
        temp=a;
        a=b;
        b=temp;
}