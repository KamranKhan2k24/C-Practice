// bubble_sort.c

#include<stdio.h>
void bubbleSort(int*,int);
void printArray(int*,int);
int main(){
        int arr[]={5,3,2,7,6,4};
        int len=sizeof(arr)/sizeof(arr[0]);
        printArray(arr,len);
        bubbleSort(arr,len);
        printArray(arr,len);
        return 0;
}
void bubbleSort(int* a,int len){
        int temp,flag;
        int i,j;
        for(i=1;i<len;i++){
                flag=0;
                for(j=1;j<=len-i;j++){
                        if(a[j]<a[j-1]){
                                flag=1;
                                temp=a[j];
a[j]=a[j-1];
                                a[j-1]=temp;
                        }
                }
                if(flag==0)break;
        }
}
void printArray(int* a,int len){
        int i;
        for(i=0;i<len;i++){
                printf("%d\t",a[i]);
        }
        printf("\n");
}
