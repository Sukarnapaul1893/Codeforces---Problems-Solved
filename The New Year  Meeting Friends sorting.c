#include<stdio.h>

int main(){

    int arr[3],i,temp;
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++){
        if(arr[i]<arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        else {
            continue;
        }
    }
    printf("%d", (arr[0]-arr[1]+arr[1]-arr[2]));
    return 0;
}
