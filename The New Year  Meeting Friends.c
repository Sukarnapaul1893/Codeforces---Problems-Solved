#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,i,temp,output,result=300,resultnew;
    scanf("%d %d %d",&a,&b,&c);
    for(i=0;i<=100;i++){
        resultnew= abs(a-i)+abs(b-i)+abs(c-i);

        if(resultnew < result){
            result= resultnew;
            output=i;
        }

    }
    printf("%d",result);
}
