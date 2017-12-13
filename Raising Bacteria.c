#include<stdio.h>

int main(){
    int x,count=0,i,j;
    scanf("%d",&x);

    for(i=1;x!=0;i++){
        for(j=1;x!=0 ;j++){
             if(x%2!=0){
            count++;
            x=x-1;
            continue;
            }
            if(pow(2,j)<=x){
                continue;
            }
            else if(pow(2,j)>x){
                count++;
                x=x-pow(2,j-1);
                j=0;
                continue;
            }

        }
    }
    printf("%d",count);
}
