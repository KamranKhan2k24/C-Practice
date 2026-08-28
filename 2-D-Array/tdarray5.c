#include<stdio.h>
int main(){
        int td[3][5]={{1,2,3,4,5},{10,9,8,7,6},
                        {11,22,33,44,55}};
        printf("%d\n",*(*td+2));
        printf("%d\n",*(*(td+2)+1));
        return 0;
}
