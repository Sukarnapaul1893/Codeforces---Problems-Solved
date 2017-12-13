#include<stdio.h>
#include<math.h>
int main(){
	int test,i,a,j;
	scanf("%d",&test);
	int arr[1000];
	int arr1[1000];
	int nmbr;
	for(a=0;a<test;a++){
		scanf("%d",&nmbr);
	for(i=0;i<1000;i++){
		arr[i]=2;
	}
	for(i=1;i<=1000;i++){
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				arr[i-1]+=2;
				
			}
			if(j==sqrt(i)){
				if(j*j==i){
					arr[i-1]--;
				}
			}
		}
	}
	
	
	for(i=0;i<1000;i++){
	
			arr1[i]=i+1;
		}
	
	
	
	
		for(i=0;i<1000;i++){
			for(j=0;j<1000;j++){
				
				if(arr[i]<arr[j]){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					
					int temp1=arr1[i];
					arr1[i]=arr1[j];
					arr1[j]=temp1;
				
				}
				
			}
		}
		for(i=0;i<1000;i++){
			for(j=0;j<1000;j++){
				if(arr[i]==arr[j] && i>j){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					
					int temp1=arr1[i];
					arr1[i]=arr1[j];
					arr1[j]=temp1;	
				}
			}
		}
		printf("Case %d: %d\n",a+1,arr1[nmbr-1]);	
	}
	return 0;
}
