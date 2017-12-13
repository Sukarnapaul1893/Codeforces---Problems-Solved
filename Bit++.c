#include<stdio.h>

int main(){

    char Bit[4];
    int testcase,count=0,i;
    scanf("%d",&testcase);

    for(i=0;i<testcase;i++){
        scanf("%s",Bit);
        if(Bit[1]=='+'){
            count++;
        }
        else if(Bit[1]=='-'){
            count--;
        }
    }
    printf("%d",count);
}
