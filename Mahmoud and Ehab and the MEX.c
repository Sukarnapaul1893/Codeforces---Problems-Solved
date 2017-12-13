#include<stdio.h>

int main(){
    int n,x,i,j,count=0;;
    scanf("%d %d",&n,&x);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==x){
            count++;

        }
    }

    for(i=0;i<x;i++){
        for(j=0;j<n;j++){
            if(arr[j]==i){
                break;
            }
            else if(arr[j]!=i && j+1==n){
                count++;
            }
        }
    }

    printf("%d",count);
}
