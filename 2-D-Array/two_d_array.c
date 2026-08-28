#include<stdio.h>
int main(){
        int td[4][5] = {{2,4,6,8,10},{1,3,5,7,9},
                        {10,20,30,40,50},{11,22,33,44,55}};
        printf("%d\n",td[2][2]);
        printf("%d\n",td[0][3]);
        td[1][3]=13;
        int i,j;
        for(i=0;i<4;i++){
                for(j=0;j<5;j++){
                        printf("%d\t",td[i][j]);
                }
                printf("\n");
        }
        return 0;
}
