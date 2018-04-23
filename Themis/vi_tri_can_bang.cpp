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
#define vll vector<ll>
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;

int main()
{
	ll n,temp;
	cin>>n;
	vll a(n+2);
	a[0]=0;
	REP(i,1,n+1){
		cin>>temp;
		a[i]=a[i-1]+temp;
	}
	vi res;
	REP(i,1,n+1){
		if(a[i]==a[n]-a[i-1]) res.add(i);
	}
	rep(i,len(res)) printf("%d\n",res[i]);
	cout<<len(res);
	return 0;
}
