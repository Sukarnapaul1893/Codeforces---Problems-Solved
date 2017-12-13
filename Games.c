#include<stdio.h>

int main(){

    int n,i,j,count=0;
    scanf("%d",&n);
    int arr[n+1][2];
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][0]==arr[j][1]){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
