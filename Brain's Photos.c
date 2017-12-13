#include<stdio.h>

int main(){
    int n,m,y=0,i,j;
    char p;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            scanf("%c",&p);
            if(p=='C' || p=='M' || p=='Y'){
                y=1;
            }
        }
    }
    if(y==0){
        printf("#Black&White");
    }
    else{
        printf("#Color");
    }
    return 0;
}
