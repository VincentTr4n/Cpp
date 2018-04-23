#include<iostream>
using namespace std;
int main(){
	int n,a[1000],c,d,count=0,ok=1;
	cin>>n>>c>>d;
	c*=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>=c && a[i]<=d) count++;
	}
	for(int i=0;i<n-1;i++) if(a[i]>=a[i+1]) ok=0;
	cout<<count<<endl;
	cout<<(ok?"YES":"NO");
}
