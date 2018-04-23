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

int a[100006];

bool cmp(int x,int y){
	return x > y;
}

int main() {
	int n,k;
	cin>>n>>k;
	rep(i,n) cin>>a[i];
	sort(a, a+n, cmp);
	ll res = 0;
	for(int i=0;i<=k;i++) res += a[i];
	for(int i=k+1;i<n;i++) res -= a[i];
	print(res);
	return 0;
}

