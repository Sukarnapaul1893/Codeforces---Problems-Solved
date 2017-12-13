#include<iostream>
using namespace std;
int main(){
	
	int n,l;
	double result;
	cin>>n;
	cin>>l;
	int i,j;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i]>arr[j] && i<j){
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	
	
	if(arr[0]!=0){
		result = arr[0]*2;
	}
	for(i=0;i<n-1;i++){
		if(arr[i+1]-arr[i]>result){
			result = arr[i+1]-arr[i];
		}
	}
	cout<<result/2;	
	return 0;
}
