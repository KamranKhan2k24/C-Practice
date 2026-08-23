#include<stdio.h>
void printArray(int a[]);
int main(){
        int arr[]={2,5,7,9,8,6};
        printArray(arr);
        return 0;
}
void printArray(int a[]){
        int length =sizeof(a)/sizeof(a[0]);
        int i;
        for(i=0;i<length;i++){
                printf("%d\t",a[i]);
        }
        printf("\n");
}
