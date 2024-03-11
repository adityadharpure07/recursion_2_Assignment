#include<iostream>
using namespace std;
// Print index of a given element in an array. If not present, print -1.
int printindex(int arr[],int ele,int n){
	if(arr[n-1]==ele){
		return n-1;
	}
	else if(arr[n-1]>ele){
        return printindex(arr,ele,n-1);
	}
	else{
		return -1;
	}
}
int main(){
	int arr[5]={1,2,3,4,5};
	int ele=6;
	cout<<printindex(arr,ele,5);
	return 0;
}