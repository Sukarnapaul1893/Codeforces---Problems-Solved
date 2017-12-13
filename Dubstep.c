#include<stdio.h>
#include<string.h>
int main(){
    int len,i,y=0;
    char input[201];
    scanf("%s",input);
    len = strlen(input);
    for(i=0;i<len;i++){
        if(input[i]=='W' && input[i+1]=='U' && input[i+2]=='B'){
            i+=2;
            if(y!=0){
                printf(" ");
            }
        }
        else{
            printf("%c",input[i]);
            y++;
        }
    }
}
