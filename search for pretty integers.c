#include<stdio.h>

int main(){
    int n,m,x,temp=9,y,tempp=9,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x<=temp){
            temp=x;
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&y);
        if(y<=tempp){
            tempp=y;
        }
    }
    if(temp>tempp){
        printf("%d%d",temp,tempp);
    }
    else if(temp==tempp){
        printf("%d",temp);
    }
    else{
        printf("%d%d",temp,tempp);
    }
}
