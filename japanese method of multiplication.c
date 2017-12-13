#include<stdio.h>
//#include<string.h>
int main(){
    int i,j,k,multi[11];
    char num1[10],num2[10];
    gets(num1);
    gets(num2);
    int n = strlen(num1);
    int m = strlen(num2);

    int digit1[n];
    int digit2[m];

    for(i=0;i<n;i++){
        digit1[i]=num1[i]-48;

    }
    for(i=0;i<11;i++){
        multi[i]=0;
    }
    for(i=0;i<n;i++){
        digit2[i]=num2[i]-48;
    }
    int carry = 0;
    for(i=0;i<n;i++){
        int result=0;
        for(j=0,k=i;j<=i && k>=i;j++,k--){
            result = result + digit1[k]*digit2[j]+carry;

        }
        carry = result/10;
        multi[i]= result%10;
    }
    for(i=0;i<n;i++){
        printf("%d",multi[i]);
    }
}
