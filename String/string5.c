#include<stdio.h>
#include<string.h>
void tooupper(char*);
int main(){
        char str[]="lucknow";
        printf("%s\n",str);
        tooupper(str);
        printf("%s\n",str);
        return 0;
}
void tooupper(char* str){
        int i;
        for(i=0;i<strlen(str);i++){
                str[i]=str[i]^32;
        }
}
