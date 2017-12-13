#include<iostream>
#include<map>
using namespace std;

string name[111111];

map<string,int>MP;

int main(){
	int n,i;
	
	cin>>n ;
	
	for(i=0;i<n;i++){
		cin>>name[i];
		
		if(MP.find(name[i])== MP.end()){
			cout<<"OK"<<endl;
			MP[name[i]]=1;
		}
		else{
			cout<<name[i]<<MP[name[i]]<<endl;
			MP[name[i]]++;
		}
	}
	return 0;
}
