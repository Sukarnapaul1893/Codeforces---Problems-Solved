#include<iostream>

using namespace std;

int main(){
	
	int x,count1=0,count2=0;
	cin>>x;
	string s[x],str;
	int i;
	for(i=0;i<x;i++){
		cin>>s[i];
		if(i==0){
			//str[0]=s[0];
			count1++;
		}
		else if(s[i]!=s[0]){
			str=s[i];
			count2++;
		}
		if(i!=0 && s[i]==s[0]){
			count1++;
		}
		
	}
	
	if(count1>count2){
		cout<<s[0];
	}
	else{
		cout<<str;
	}
	
	return 0;
}
