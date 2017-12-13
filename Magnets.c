#include<stdio.h>

int main(){

    int n,i,count=0;
    char str[3],c;
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        gets(str);
        if(c==str[0]){
            count++;
        }
        c=str[1];
    }
    printf("%d",count);
}
