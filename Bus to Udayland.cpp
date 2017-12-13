#include<iostream>
using namespace std;
int main(){
	
	int x,y=0;
	cin>>x;
	
	int i;
	string s[x];
	for(i=0;i<x;i++){
		cin>>s[i];
		if(y==-1){
			continue;
		}
		if(s[i].at(0)=='O'&&s[i].at(1)=='O'){
			s[i].at(0)='+' ;
			s[i].at(1)='+';
			y=-1;
		}
		else if(s[i].at(3)=='O'&&s[i].at(4)=='O'){
			s[i].at(3)='+' ;
			s[i].at(4)='+';
			y=-1;
		}
	}
	if(y==-1){
	cout<<"YES"<<endl;
	for(i=0;i<x;i++){
		cout<<s[i]<<endl;
	}
    }
	else{
		cout<<"NO";
	}
	return 0;
}
