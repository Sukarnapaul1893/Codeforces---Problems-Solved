#include<iostream>

using namespace std;

int main(){
	
	int len,test,i,j;
	
	cin>>len>>test;
	string s;
	cin>>s;
	
	for(j=0;j<test;j++){
		int m,n;
		char a,b;
		
		cin>>m>>n;
		cin>>a>>b;
		
		
		for(i=m-1;i<n;i++){
			if(s.at(i)==a){
				s.at(i)=b;
			}	
		}
	}
	cout<<s;
	return 0;
}
