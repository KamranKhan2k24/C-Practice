#include<stdio.h>
        int arraySum(int a[],int len){
        int sum=0;
        int i;
        for(i=0;i<len;i++){
                sum=sum+a[i];
        }
        return sum;
}
int main(){
        int arr[]={2,5,7,9,3,4,6};
        int length=sizeof(arr)/sizeof(arr[0]);
        int result=arraySum(arr,length);
        printf("sum=%d\n",result);
        return 0;
}
