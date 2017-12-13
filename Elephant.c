#include<stdio.h>

int main(){
    int a,count=0;
    scanf("%d",&a);

        if(a>=5){
            count=a/5;
            a=a%5;
        }
        if(a==4 || a==3 || a==2 || a==1){
            count+=1;
        }
        printf("%d",count);

}
