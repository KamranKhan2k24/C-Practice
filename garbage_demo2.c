#include<stdio.h>
void display();
int main(){
        display();
        display();
        display();
        return 0;
}
void display(){
        int x=10;
        printf("x=%d\n",x);
        x++;
}
