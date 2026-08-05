#include<stdio.h>
#include<limits.h>
int main(){
        int arr[]={-5,-4,-7,-8,-9};
        int len=sizeof(arr)/sizeof(arr[0]);
        int i,max=INT_MIN;
        for(i=0;i<len;i++){
                if(arr[i]>max){
                        max=arr[i];
                }
        }
        printf("max=%d\n",max);
        return 0;
}
