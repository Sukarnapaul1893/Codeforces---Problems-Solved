#include<iostream>

using namespace std;

int main(){
	int i,j,x=0;
	string s;
	cin>>s;
	if(s.length()<=3){
		cout<<"NO";
		return 0;
	}
	for(i=0;i<s.length()-1;i++){
		if(s.at(i)=='A' && s.at(i+1)=='B'){
			i+=2;
			x=-1;
			break;
		}
		
	}
	
	if(x==-1){
		for(j=i;j<s.length()-1;j++){
			if(s.at(j)=='B' && s.at(j+1)=='A'){
			cout<<"YES";
			return 0;
		}	
		}
	}
	for(i=0;i<s.length()-1;i++){
		if(s.at(i)=='B' && s.at(i+1)=='A'){
			i+=2;
			x=1;
			break;
		}
	}
	if(x==1){
		for(j=i;j<s.length()-1;j++){
			if(s.at(j)=='A' && s.at(j+1)=='B'){
				cout<<"YES";
				return 0;
		}	
		}	
		
	}
	
	cout<<"NO";
	return 0;
}
