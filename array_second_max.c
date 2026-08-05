#include<stdio.h>
#include<limits.h>
int main(){
        int arr[]={-5,-2,-7,-1,-8,-9};
        int len=sizeof(arr)/sizeof(arr[0]);
        int i,max=INT_MIN,smax=INT_MIN;
        for(i=0;i<len;i++){
                if(arr[i]>max){
                        smax = max;
                        max = arr[i];
                }else if(arr[i]>smax){
                        smax = arr[i];
                }
        }
        printf("second max=%d\n",smax);
        return 0;
}
