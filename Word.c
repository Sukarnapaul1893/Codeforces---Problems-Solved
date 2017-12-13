#include<stdio.h>

int main(){

    char word[101];
    int i,l=0,u=0;
    scanf("%s",word);
    for(i=0;i<strlen(word);i++){
        if(word[i]>=97 && word[i]<=122){
            l++;
        }
        else{
            u++;
        }
    }
    if(l>=u){
        for(i=0;i<strlen(word);i++){
             if(word[i]>=65 && word[i]<=90){
             word[i]=word[i]+32;
        }
            else{
                continue;
        }
        }
    }
    if(l<u){
        for(i=0;i<strlen(word);i++){
             if(word[i]>=97 && word[i]<=122){
             word[i]=word[i]-32;
        }
            else{
                continue;
        }
        }
    }
    puts(word);
}
