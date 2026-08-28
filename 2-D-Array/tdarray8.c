#include<stdio.h>
int main(){
        int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        printf("%d\n",(int)sizeof(arr));
        printf("%d\n",(int)sizeof(arr[0]));
        printf("%d\n",(int)sizeof(arr[0][0]));
        int rows=sizeof(arr)/sizeof(arr[0]);
        int cols=sizeof(arr[0])/sizeof(arr[0][0]);
        printf("%d\n",rows);
        printf("%d\n",cols);
        return 0;
}
