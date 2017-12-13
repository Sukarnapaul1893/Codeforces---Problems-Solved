#include<stdio.h>
#include<string.h>
int check(char s1[101], char s2[101]){
    int i=0,x=0;
    while(s1[i]!='\0' || s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            x=1;
            break;
        }
        i++;
    }
    return x;
}
int main(){
    int x,i,j,a=1;

    scanf("%d",&x);

    char name[x][101];
    for(i=0; i<x; i++){
        scanf("%s",name[i]);
    }
    for(i=0; i<x; i++){
        if(i==0){
            printf("NO\n");
            continue;
        }
        for(j=0; j<i; j++){
            if(check(name[i],name[j])==1){
                if(j==i-1){
                    printf("NO\n");
                }
                else{
                    continue;
                }
            }
            else if(check(name[i],name[j])==0){

                printf("YES\n");
                break;
            }
        }
    }


    return 0;
}
