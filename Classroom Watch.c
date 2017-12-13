#include<stdio.h>

long long int check(long long int n){
    long long int sum=n,j,temp;
        for(j=0;n!=0;j++){
            temp=n%10;
            sum = sum + temp;
            n=n/10;
        }

    return sum;
}

int main(){
    long long int n,raw,count=0,result[100],j=0,i;
    scanf("%lld",&n);
    raw=n;
    while(n>=raw-202 && n>=0){
        long long int x=check(n);
        if(x==raw){
            count++;
            result[j]=n;
            j++;
        }
        n--;
    }
    printf("%lld\n",count);
    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            if(result[i]>result[j] && i<j){
                long long int temp=result[i];
                result[i]=result[j];
                result[j]=temp;
            }
        }
    }
    for(i=0;i<count;i++){
        printf("%lld\n",result[i]);
    }

}
