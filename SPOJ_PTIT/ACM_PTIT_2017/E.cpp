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

#define N 1000007

ll a[104][12];

int main() {
	int n;
	cin>>n;
	rep(i,n) rep(j,11) cin>>a[i][j];
	
	ll res = -11091997;
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	for(int k=j+1;k<n;k++){
		ll sum = 0;
		rep(t,11) sum += max(a[i][t], max(a[j][t],a[k][t]));
		res = max(res,sum);
	}
	print(res);
	return 0;
}

