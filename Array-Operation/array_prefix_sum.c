#include<stdio.h>
#include<limits.h>
int main(){
        int arr[]={2,5,7,3,8,4};
        int len=sizeof(arr)/sizeof(arr[0]);
        int i=0;
        for(i=1;i<len;i++){
                arr[i]=arr[i]+arr[i-1];
        }
        for(i=0;i<len;i++){
                printf("%d\t",arr[i]);
        }
        printf("\n");
        return 0;
}
