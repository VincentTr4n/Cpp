#include<iostream>
using namespace std;

int main(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int *d = new int[n];
	d[0]=0;
	for(int i=1;i<=n;i++){
		d[i] =-1;
		if(i>=a && d[i-a]>=0 && d[i]<d[i-a]+1) d[i]=d[i-a]+1;
		if(i>=b && d[i-b]>=0 && d[i]<d[i-b]+1) d[i]=d[i-b]+1;
		if(i>=c && d[i-c]>=0 && d[i]<d[i-c]+1) d[i]=d[i-c]+1;		
	}
	cout<<d[n];
}
