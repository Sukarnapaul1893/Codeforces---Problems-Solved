#include<stdio.h>

int main(){
    int i,j,y=0,n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
            if(i%2==1){
                y++;
            }
        for(j=0;j<m;j++){

            if(i==0 || i==n-1){
                printf("#");
            }
            else if(i%2==0){
                printf("#");
            }
            else if(y%2==1 && j==m-1){
                printf("#");
            }
            else if(y%2==0 && j==0){
                printf("#");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
}
