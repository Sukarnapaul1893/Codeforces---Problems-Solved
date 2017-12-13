#include<stdio.h>

int main(){
    int k,l,m,n,total,count=0,i ;
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&total);

    int harm[total];
    for(i=0;i<total;i++){
        harm[i]=0;
    }

    for(i=0;i<total;i++){
        if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0){
            harm[i]=1;
        }
    }
    for(i=0;i<total;i++){
        //printf("%d",harm[i]);
        if(harm[i]==1){
            count++;
        }
    }
    printf("%d",count);
}
