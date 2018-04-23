#include<iostream>
using namespace std;

int main(){
	int n,a,b[1001],d=-1;
	cin>>n;
	for(int i=1;i<=1000;i++) b[i] = 0;
	for(int i=0;i<n;i++){
		cin>>a; b[a]++;
	}
	for(int i=1;i<=1000;i++) if(b[i]>0) d++;
	cout<<d;
}
