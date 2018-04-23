#include<iostream>
using namespace std;

int main(){
	int c[100005],d[100005],x[100005],max=0,n;
	cin>>n;
	scanf("%s",c+1);
	x[0]=d[0]=0;
	for(int i=1;i<=n;i++){
		d[i]=d[i-1]+(c[i]=='D'?1:0);
		x[i]=x[i-1]+(c[i]=='X'?1:0);
	}
	
	for(int i=1;i<n;i++)
	for(int j=i+max+1;j<=n;j+=2)
		if(d[j]-d[i-1]==x[j]-x[i-1]) max=j-i+1;
	cout<<max;
}
