#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if((n*m)%2==0 && (n*m)>2){
        printf("Malvika");
    }
    else{
        printf("Akshat");
    }
    return 0;
}
