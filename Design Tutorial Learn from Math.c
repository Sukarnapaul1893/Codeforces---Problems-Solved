#include<stdio.h>
#include<math.h>
int prime(int x){
    int i;
    for(i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return 1;
        }
        else {
            continue;
        }
    }
    return 0;
}
int main(){
    int x,i;
    scanf("%d",&x);
    for(i=4;i<x;i++){
        if(prime(i)==1 && prime(x-i)==1){

            printf("%d %d",i,x-i);
            break;
        }

    }
    return 0;
}
