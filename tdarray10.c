#include<stdio.h>
int main(){
        int a[3][3]={{3,5,7},{2,4,6},{1,5,9}};
        int b[3][3]={{2,4,6},{8,7,5},{1,3,2}};
        int c[3][3];
        int i,j;
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        c[i][j]=a[i][j]+b[i][j];
                }
        }
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",c[i][j]);
                }
                printf("\n");
                return 0;
        }
}
