#include<stdio.h>
#include<limits.h>
int main(){
        int arr[]={2,5,7,3,8,4};
        int len=sizeof(arr)/sizeof(arr[0]);
        int i=0,j=len-1,temp;
        while(i<j){
                while((arr[i]%2==0)&&(i<j))i++;
                while((arr[j]%2==1)&&(i<j))j--;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }
                for(i=0;i<len;i++){
                printf("%d\t",arr[i]);
                }
                printf("\n");
        return 0;
}
