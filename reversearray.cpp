#include<iostream>
using namespace std;

void print(int a[],int n){
    
	if(n==0) return;
	cout<<a[n-1]<<" ";
	print(a,n-1);
	
}
int main(){
    int a[]={1,2,3,4,5,6,7};
	print(a,7);
}