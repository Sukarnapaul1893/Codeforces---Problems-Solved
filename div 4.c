#include<stdio.h>
#include<string.h>
int main(){
    int len,i,count=0,y=0;
    char bin[102];
    scanf("%s",bin);
    len=strlen(bin);
    for(i=0;i<len;i++){

        if(bin[i]=='1'){
            y=1;
        }
        if(y==0){
            continue;
        }
        if(bin[i]=='0'){
            count++;
        }
        else{
            continue;
        }

    }
    if(count>=6 && y==1){
        printf("yes");
    }
    else{
        printf("no");
    }
}
