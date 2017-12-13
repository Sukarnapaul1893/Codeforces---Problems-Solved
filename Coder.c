#include<stdio.h>

int main(){
    int x,y,n,count=0;
    scanf("%d",&n);

    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            if((x%2==0 && y%2==0) || (x%2==1 && y%2==1) ){
                count++;

            }
            else{
                continue;
            }
        }
    }
    printf("%d\n",count);
    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            if((x%2==0 && y%2==0) || (x%2==1 && y%2==1) ){
                printf("C");

            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
