#include<iostream>
using namespace std;
void printsumtriangle(int arr[],int n){
	if(n<1) return;
	int temp[n-1];
	for(int i=0;i<n-1;i++){
		temp[i]=arr[i]+arr[i+1];
	}
	
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	printsumtriangle(temp,n-1);
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	printsumtriangle(arr,n);
	return 0;
}