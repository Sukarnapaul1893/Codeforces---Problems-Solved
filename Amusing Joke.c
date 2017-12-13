#include<stdio.h>
#include<string.h>
int main(){
    char name[101];
    char address[101];
    char shuffle[202];
    scanf("%s",name);
    scanf("%s",address);
    scanf("%s",shuffle);
    strcat(name,address);
    int arr1[26],arr2[26],i;
    for(i=0;i<26;i++){
        arr1[i]=0;
        arr2[i]=0;
    }
    for(i=0;i<strlen(name);i++){
        arr1[name[i]-65]++;
    }
    for(i=0;i<strlen(shuffle);i++){
        arr2[shuffle[i]-65]++;
    }
    for(i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            printf("NO");
            break;
        }

        if(i==25){
            printf("YES");
        }
    }


}
