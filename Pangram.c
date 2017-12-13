#include<stdio.h>

int main(){
    int n,i,j,y=0;
    scanf("%d",&n);
    char str[n+1];
    int count[26];
    for(i=0;i<26;i++){
        count[i]=0;
    }
    scanf("%s",str);
    for(i=0;i<n;i++){
        for(j=0;j<26;j++){
            if(str[i]==j+65 || str[i]==j+97){
                count[j]++;
            }
        }
    }
    for(i=0;i<26;i++){
        if(count[i]==0){
            y=1;
            break;
        }
    }
    if(y==1){
        printf("NO");
    }
    else{
        printf("YES");
    }
}
