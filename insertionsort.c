#include<stdio.h>
void insertionSort(int* ,int);
void printarray(int*,int);
int main(){
        int arr[]={5,2,8,4,6,3};
        int len=sizeof(arr)/sizeof(arr[0]);
        printarray(arr,len);
        insertionSort(arr,len);
        printarray(arr,len);
        return 0;
}
void insertionSort(int* a,int len){
        int i,j;
        int temp;
        for(i=1;i<len;i++){
                temp=a[i];
                j=i-1;
                while(j>=0 && temp <a[j]){
                        a[j+1]=a[j];
                        j--;
                }
                a[j+1]=temp;
        }
}
void printarray(int* a,int len){
        int i;
        for(i=0;i<len;i++){
                printf("%d\t",a[i]);
        }
        printf("\n");
}
