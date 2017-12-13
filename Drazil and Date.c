#include<stdio.h>

int main(){

    int a,b,s;
    scanf("%d %d %d",&a,&b,&s);
    if(s==abs(a)+abs(b)){
        printf("Yes");
    }
    else if((abs(a)+abs(b)-s)%2==0 && s>abs(a)+abs(b)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
