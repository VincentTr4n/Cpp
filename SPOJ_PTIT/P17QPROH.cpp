#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
#define sqr(x) ((x)*(x))
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;

#define N 806
ll a[N], b[N];

bool cmp(ll x,ll y){
	return x > y;
}


int main() {
	//freopen("in.txt","r",stdin);
	int t;
	cin >> t;
	rep(tt, t){
		int n;
		cin >> n;
		rep(i, n) cin >> a[i];
		rep(i, n) cin >> b[i];
		
		sort(a, a + n);
		sort(b, b + n, cmp);
		
		ll res = 0;
		rep(i, n) res += a[i] * b[i];
		cout << "Case #" << (tt + 1) << ": " << res << endl;
	}
	
	return 0;
}

