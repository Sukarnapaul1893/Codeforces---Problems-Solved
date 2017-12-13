#include<stdio.h>
#include<string.h>
int main(){
    int x=1,i,j;
    char str1[101], str2[101];
    scanf("%s",str1);
    scanf("%s",str2);
    int n= strlen(str1);
    for(i=0,j=n-1;i<n,j>=0;i++,j--){
        if(str1[i]==str2[j]){
            continue;
        }
        else{
            x=0;
            break;
        }
    }
    if(x==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}
