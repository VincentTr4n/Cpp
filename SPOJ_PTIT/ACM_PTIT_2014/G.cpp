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

int a[10][10];
int b[10];


int main() {
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		rep(i, n) rep(j, n) cin >> a[i][j];
		rep(i, n) b[i] = i;
		ll res = 1e18;
		for(;;){
			ll sum = 0;
			rep(i,n) sum += a[i][b[i]];
			res = min(sum, res);
			
			if(!next_permutation(b, b + n)) break;
		}
		print(res);
	}
	return 0;
}

