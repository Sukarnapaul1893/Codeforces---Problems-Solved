#include<stdio.h>

int main(){
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(even>1 || odd>1){
            break;
        }
    }
    if(even>1){
        for(i=0;i<n;i++){
            if(arr[i]%2==1){
                printf("%d",i+1);
                break;
             }
        }
    }
    if(odd>1){
        for(i=0;i<n;i++){
            if(arr[i]%2==0){
                printf("%d",i+1);
                break;
            }
        }
    }
    return 0;
}
