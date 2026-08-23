#include<stdio.h>
int main(){
        int arr[]={5,7,2,8,9,3,4};
        int len=sizeof(arr)/sizeof(arr[0]);
        int i,sum =0;
        for(i=0;i<len;i++){
                sum= sum +arr[i];
        }
        printf("sum=%d\n",sum);
        return 0;
}

