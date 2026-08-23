//This code will create a kind of infinite recursion because the main function calls itself
// without any termination condition. This will eventually lead to a stack overflow error as 
//the call stack grows with each recursive call.

#include<stdio.h>
int main(){
        printf("Main function");
        main();
        return 0;
}

