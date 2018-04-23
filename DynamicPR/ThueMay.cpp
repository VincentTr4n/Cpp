#include<iostream>
#include<algorithm>
using namespace std;

struct M{
	int a;
	int b;
	int c;
};

bool comp(M m1,M m2){ return m1.b<m2.b;}

int main(){
	M m[100005];
	int n,ans=0,dp[100005];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m[i].a;
		cin>>m[i].b;
		cin>>m[i].c;
	}
	sort(m,m+n,comp);
	
	for(int i=1;i<n;i++){
		dp[i]=m[i].c;
		for(int j=0;j<i-1;j++)
			if(m[j].b<=m[i].a && dp[i]<dp[j]+m[i].c) dp[i]=dp[j]+m[i].c;
	}
	cout<<ans<<"--"<<dp[n-1];
}
