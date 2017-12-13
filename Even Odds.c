#include<stdio.h>

int main(){
    long long int n,k,output;
    scanf("%lld %lld",&n,&k);
    if(k<=(n+1)/2){
        output=1+2*(k-1);
    }
    else{
        k=k-(n+1)/2;
        output=2+2*(k-1);
    }
    printf("%lld",output);
}
