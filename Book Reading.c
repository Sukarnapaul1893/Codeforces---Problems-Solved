#include<stdio.h>

int main(){
    int n,t,sum=0,i,y=0,count=0;
    scanf("%d %d",&n,&t);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+86400-arr[i];
        if(sum<t && y!=1){
            count++;
        }
        else if(sum>=t && y!=1){
            y=1;
            count++;
        }
    }
    int result= sum/t;
    printf("%d",count);
    return 0;
}
