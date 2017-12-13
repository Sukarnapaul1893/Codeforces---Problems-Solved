#include<iostream>
#include<math.h>

using namespace std;

int main(){
	long long int k,n,w,i;
	cin>>k;
	cin>>n;
	cin>>w;
	long long int sum=0;
	for(i=1;i<=w;i++){
		sum=sum+i;
	}
	
	int result= (sum*k)-n;
	
	if(result<0){
		cout<<'0';
		return 0;
	}
	cout<<result;
	return 0;
}
