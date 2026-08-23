#include<stdio.h>
void printArray(int*,int);
int main(){
        int arr[]={2,5,7,9,8,6};
        int len=sizeof(arr)/sizeof(arr[0]);
        printArray(arr,len);
        return 0;
}
void printArray(int*a,int length){
        int i;
        for(i=0;i<length;i++){
                printf("%d\t",a[i]);
        }
        printf("\n");
}
