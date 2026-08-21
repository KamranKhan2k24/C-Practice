#include<stdio.h>
int main(){
        printer();
        return 0;
}
void printer(){
        int x =10;
        static int y;
        y=x;
        printf("y=%d\n",y);
}
