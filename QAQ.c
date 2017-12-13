#include<stdio.h>
#include<string.h>
int main(){
    int count=0,i,j,k;
    char str[101];
    scanf("%s",str);

    for(i=0;i<strlen(str);i++){
        if(str[i]=='Q'){
            for(j=i;j<strlen(str);j++){
                if(str[j]=='A'){
                    for(k=j;k<strlen(str);k++){
                        if(str[k]=='Q'){
                            count++;
                        }

                    }
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
