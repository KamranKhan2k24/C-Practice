#include<stdio.h>
int main(){
        char* name="Luck\0now";
        char city []="Kanpur";
        printf("name=%s\n",name);
        printf("city=%s\n",city);
        city[0]='N';
        printf("city=%s\n",city);
        /**name ='T';
        name[0]=,T,;*/
        name="Jaunpur";
        printf("name=%s\n",name);
        return 0;
}
