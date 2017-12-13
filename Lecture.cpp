#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int a,b,i,j,k;
	cin>>a;
	cin>>b;
	string s1[b];
	string s2[b];
	string s3[a];
	for(i=0;i<b;i++){
		cin>>s1[i];
		cin>>s2[i];
	}
	for(j=0;j<a;j++){
		cin>>s3[j];
	}
	for(j=0;j<a;j++){
		
		for(k=0;k<b;k++){
		
		if(s3[j]==s1[k]){
			if(s1[k].length() <= s2[k].length()){
				cout<<s1[k]<<" ";
			}
			else{
				cout<<s2[k]<<" ";
			}
		}
		
		
		}	
		
	}
	return 0;
}
