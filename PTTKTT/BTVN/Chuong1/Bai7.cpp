#include<iostream>
using namespace std;

int BinarySearch(int *a,int k,int n){
	int i=0,j=n-1;
	while(i<j){
		int m=(i+j)/2;
		if(a[m]>=k) j=m;
		else i=m+1; 
	}
	if(i==j && a[i]<=k) return a[i];
	return -1;
}

int main(){
	int n,k,a[100005];
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<BinarySearch(a,k,n);
}
