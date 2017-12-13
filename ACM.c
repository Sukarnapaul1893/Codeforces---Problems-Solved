#include<stdio.h>

int main(){
    int score[6],sum=0,y=0,i,j,k;
    for(i=0;i<6;i++){
        scanf("%d",&score[i]);
    }
    for(i=0;i<6;i++){
        sum=sum+score[i];
    }
    for(i=0;i<4;i++){
        for(j=1;j<5;j++){
            for(k=2;k<6;k++){
                int x= score[i]+score[j]+score[k];

                if(x==sum-x && i!=j && j!=k && i!=k){
                    printf("%d %d %d",score[i],score[j],score[k]);
                    y=1;
                    break;
                }
                if(y==1){
                    break;
                }
            }
            if(y==1){
                break;
            }
        }
    }
    if(y==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
