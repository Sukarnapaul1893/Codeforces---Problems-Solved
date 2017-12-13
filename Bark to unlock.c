#include<stdio.h>

int main(){
    char password[2];
    gets(password);

    int n,x=0,y=0,z=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char bark[2];
        gets(bark);
        if(password[0]==bark[1]){
            x=1;
        }
        if(password[1]==bark[0]){
            y=1;
        }
        if(password[0]==bark[0] && password[1]==bark[1]){
            z=1;
        }
    }
    if(x==1 && y==1){
        printf("YES");
    }
    else if(z==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
