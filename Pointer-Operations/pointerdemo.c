#include<stdio.h>
int main(){
        int x=10;
        int y=&x;
        int* p=&x;
        printf("Address of x=%X\n",y);
        printf("Adress of x in pointer = %p\n",p);
        y++;
        p++;
        printf("Address of x =%X\n",y);
        printf("Address of x in pointer =%p\n",p);
        return 0;
}
