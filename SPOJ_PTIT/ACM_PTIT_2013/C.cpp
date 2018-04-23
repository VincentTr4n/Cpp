#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
#define sqr(x) ((x)*(x))
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;

ll d(ll xa,ll ya,ll xb,ll yb)
{
	return sqrt( (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb) );
}

int main() {
	int t;
	ll xa,ya,xb,yb;
	cin>>t;
	while(t--){
		cin>>xa>>ya>>xb>>yb;
		if((ya>0 && yb>0) || (ya<0 && yb<0)) print(d(xa,-ya,xb,yb));
		else print(d(xa,ya,xb,yb));
	}
	return 0;
}

