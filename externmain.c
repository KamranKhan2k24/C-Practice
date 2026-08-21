#include<stdio.h>
extern int x;
void display();
int main(){
        display();
        printf("x=%d\n",x);
        return 0;
}
void display(){
        printf("x=%d\n",x);
}
