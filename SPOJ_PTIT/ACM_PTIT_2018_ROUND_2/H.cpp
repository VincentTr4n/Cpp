#include <bits/stdc++.h>
#define REP(i,a,b) for(i=a,_##i=b;i<_##i;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
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
int i,j;

int CountZeros(ll x) {
	int cnt = 0;
	while (x != 0) {
		long t = x % 2;
		x /= 2;
		if (t == 0) cnt++;
	}
	return cnt;
}
int main() {
	ll n;
	cin>>n;
	print(1<<CountZeros(n));
	return 0;
}
