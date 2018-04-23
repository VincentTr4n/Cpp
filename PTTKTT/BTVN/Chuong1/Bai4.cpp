#include<iostream>
using namespace std;

bool checkNT(int n){
	if(n==2) return true;
	if(n<2 || n%2==0) return false;
	for(int i=3;i*i<=n;i+=2) if(n%i==0) return false;
	return true; 
}

int main(){
	int n,l,r;
	cin>>n;
	for(int t=0;t<n;t++){
		cin>>l>>r;
		int d=0;
		for(int i=l;i<=r;i++) if(checkNT(i)) d++;
		cout<<d<<endl;
	}
}
