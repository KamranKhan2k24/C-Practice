#include<stdio.h>
int main(){

        int age=30;
        age =35;
        const int salary =10;
        int *p=&age;
        *p=40;
        printf("%d\n",*p);
        printf("%d\n",age);
        p=&salary;
        *p=25;
        printf("%d\n",salary);
        return 0;
}
