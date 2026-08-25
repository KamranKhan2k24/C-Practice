#include"myheader.h"
#include<stdio.h>
void printer(int*,int);
int main(){
        int arr[]={9,3,2,7,6,5,1};
        int length=sizeof(arr)/sizeof(arr[0]);
        printer(arr,length);
        sort(arr,length,asc);
        printer(arr,length);
        sort(arr,length,desc);
        printer(arr,length);
        return 0;
}
void printer(int *a,int len){
        int i;
        for(i=0;i<len;i++){
                printf("%d\t",a[i]);
        }
        printf("\n");
}
