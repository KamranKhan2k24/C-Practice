#include<stdio.h>
int add(int ,int);
int main(){
        int x,y,z;
        printf("Enter 2 numbers");
        scanf("%d%d",&x,&y);
        z=add(x,y);
        printf("Result =%d\n",z);
        return 0;
}
int add(int a ,int b){
        int c;
                c=a+b;
        return c;
}
