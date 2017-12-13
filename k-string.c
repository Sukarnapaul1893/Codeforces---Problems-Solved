#include<stdio.h>
#include<string.h>
int main(){
  
  int x,i,j,k;
  scanf("%d",&x);
  char s[1001];
  scanf("%s",s);
  
  int arr[26];
  
  for(i=0;i<26;i++){
    arr[i]=0;
  }
  
  for(i=0;i<strlen(s);i++){
    arr[s[i]-97]++;
  }
  
  for(i=0;i<26;i++){
    if(arr[i]%x==0){
      continue;
    }
    else{
      printf("-1");
      return 0;
    }
  }
  
  for(i=0;i<x;i++){
    
    for(j=0;j<26;j++){
      
      for(k=0;k<(arr[j]/x);k++){
        
        printf("%c",j+97);
        
      }
      
      
    }
    
    
    
    
    
  }
  
  
  return 0;
}
