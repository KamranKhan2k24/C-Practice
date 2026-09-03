#include<stdio.h>
#include<string.h>
void frequencycount(char*);
int main(){
        char* st="Lucknow Junction";
        frequencycount(st);
        return 0;
}
void frequencycount(char* str){
        int freq[256]={0};
        int i;
        for(i=0;i<strlen(str);i++){
                if(str[i]==' ')continue;
                freq[str[i]]++;
        }
        for (i=0;i<256;i++){
                if(freq[i]>0){
                        printf("%c\t%d\n",i,freq[i]);
                }
        }
}