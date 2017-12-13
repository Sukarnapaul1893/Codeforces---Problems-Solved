#include<stdio.h>

int main(){

    long long int a,b,c,d,count=0;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a==b){
        count++;
    }
    if(b==c){
        count++;
    }
    if(c==d){
        count++;
    }
    if(a==c){
        count++;
    }
    if(a==d){
        count++;
    }
    if(b==d){
        count++;
    }
    if(count==1){
        printf("1");
    }
    if(count==3){
        printf("2");
    }
    if(count==2){
        printf("2");
    }
    if(count>3){
        printf("3");
    }
    if(count==0){
        printf("0");
    }
    return 0;
}
