#include<stdio.h>
int main(){
        int td[4][4]={{1,2,3,4},{5,6,4,8},
                        {9,15,10,12},{10,20,30,40}};
        int i,j,sum=0;
        for(i=0;i<4;i++){
                sum=sum+td[i][i];
                        td[i][3-i];
        }
        printf("Sum of primary diagonal=%d\n",sum);
        return 0;
}
