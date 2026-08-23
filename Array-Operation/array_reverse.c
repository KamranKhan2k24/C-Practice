#include<stdio.h>
#include<limits.h>

int main(){
        int arr[]={-5,-2,-7,-1,-8,-9};
        int len=sizeof(arr)/sizeof(arr[0]);
        int i=0,j=len-1,temp;
        while(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
        }
        for(i=0;i<len;i++){
        printf("%d\t",arr[i]);
        }
        printf("\n");
        return 0;
}