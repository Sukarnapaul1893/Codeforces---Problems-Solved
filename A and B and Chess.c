#include<stdio.h>

int main(){
    int count1=0,count2=0,i,j;
    char x;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%c",&x);
            if(x=='q'){
                count1+=9;
            }
            else if(x=='r'){
                count1+=5;
            }
            else if(x=='b'){
                count1+=3;
            }
            else if(x=='n'){
                count1+=3;
            }
            else if(x=='p'){
                count1+=1;
            }
            else if(x=='Q'){
                count2+=9;
            }
            else if(x=='R'){
                count2+=5;
            }
            else if(x=='B'){
                count2+=3;
            }
            else if(x=='N'){
                count2+=3;
            }
            else if(x=='P'){
                count2+=1;
            }
            else{
                continue;
            }

        }
    }
    if(count2>count1){
        printf("White");
    }
    if(count2<count1){
        printf("Black");
    }
    if(count2==count1){
        printf("Draw");
    }
}
