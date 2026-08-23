#include<stdio.h>
int main(){
        int arr[]={5,7,2,8,9,3,4};
        int len=sizeof(arr)/sizeof(arr[0]);
        int i,max =0;
        for(i=0;i<len;i++){
                if(arr[i]>max){
                        max=arr[i];
                }
        }
        printf("max=%d\n",max);
        return 0;
}

