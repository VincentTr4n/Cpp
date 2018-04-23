#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<b;i++)
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

int main() {
	int t;
	cin>>t;
	while(t-- ) {
		ll l,r;
		cin>>l>>r;
		bool a[r - l + 1]; 
		memset(a, true, (r-l+2));
		for (ll i = 2; i * i <= r; ++i) {
			for (ll j = max(i * i, (l + (i - 1)) / i * i); j <= r; j += i) a[j - l] = false;
		}
		for (ll i = max(l, (ll)2); i <= r; ++i) {
			if (a[i - l]) print(i);
		}
		print("");
	}
	return 0;
}
