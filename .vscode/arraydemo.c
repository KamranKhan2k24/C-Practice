#include<stdio.h>
int main(){
        int arr[]={5,7,2,8,9,3,4};
        int len =sizeof(arr)/sizeof(arr[0]);
        int i;
        for (i=0;i<len;i++){
        printf("%d\t",arr[i]);
        }
        printf("\n");
        return 0;
}
