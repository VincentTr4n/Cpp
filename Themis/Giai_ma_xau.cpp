#include<iostream>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<string.h>
#include<vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;

int main()
{
	ll n,sum=0,a[1000002];
	string res;
	cin>>n;
	rep(i,n){
		cin>>a[i];
		sum+=a[i];
	}
	sum/=(n-1);
	rep(i,n){
		res+=(char)(sum-a[i]);
	}
	cout<<res;
	return 0;
}
