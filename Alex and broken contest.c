#include<stdio.h>
#include<string.h>
int main(){
    int i,y=0;
    char str[101];
    scanf("%s",str);
    int len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='D' && str[i+1]=='a' && str[i+2]=='n' && str[i+3]=='i' && str[i+4]=='l'){
            y=y+1;
        }
        if(str[i]=='O' && str[i+1]=='l' && str[i+2]=='y' && str[i+3]=='a'){
            y=y+1;
        }
        if(str[i]=='S' && str[i+1]=='l' && str[i+2]=='a' && str[i+3]=='v' && str[i+4]=='a'){
            y=y+1;
        }
        if(str[i]=='A' && str[i+1]=='n' && str[i+2]=='n'){
            y=y+1;
        }
        if(str[i]=='N' && str[i+1]=='i' && str[i+2]=='k' && str[i+3]=='i' && str[i+4]=='t' && str[i+5]=='a'){
            y=y+1;
        }


    }
    if(y==1){
            printf("YES");
        }
        else{
            printf("NO");
        }
    return 0;
}
