#include<iostream>

using namespace std;

int main(){
	int ans;
	int n,a,b,c;
	cin>>n;
	cin>>a;
	cin>>b;
	cin>>c;
	
	if(n==0) ans=0;
	else if(n==1) ans=0;
	else if(n==2) ans=min(a,b);
	else{
		if(min(a,b)<=c){
			ans= (n-1)*min(a,b);
		}
		else{
			ans=min(a,b)+(n-2)*c;
		}
	}
	cout<<ans;
	return 0;
}
