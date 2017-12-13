#include<iostream>

using namespace std;

int main(){
	int i,j;
	string s[8];
	s[0]= "vaporeon" ;
	s[1]= "jolteon" ;
	s[2]= "flareon";
	s[3]= "espeon";
	s[4]= "umbreon";
	s[5]= "leafeon";
	s[6]= "glaceon";
	s[7]= "sylveon";
	
	int x;
	cin>>x;
	string inp;
	cin>>inp;
	
	string temp=inp;
	for(i=0;i<8;i++){
		
		for(j=0;j<min(s[i].length(),inp.length());j++){
			if(inp.at(j)=='.'){
				inp.at(j)= s[i].at(j);
			}
		}
		if(inp==s[i]){
			cout<<s[i];
			break;
		}
		else{
			inp = temp;
		}
	}
	return 0;
}
