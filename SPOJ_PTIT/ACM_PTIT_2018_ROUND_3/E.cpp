#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<=b;i++)
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

const int N = 500005;
ll a[N], b[N], c[N], d[N], LeftB[N], RightB[N], LeftA[N], RightA[N];
ll n,m, t;

void reset() {
	REP(i,1,min(n,m)) LeftB[i] = LeftA[i] = RightB[i] = RightA[i] = 0;
	REP(i,min(n,m), max(n,m)) LeftB[i] = LeftA[i] = RightB[i] = RightA[i] = 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while(t-- >0) {
		cin >> n;
		REP(i,1,n) {
			cin >> a[i];
			c[i] = a[i];
		}
		cin >> m;
		REP(i,1,m) {
			cin >> b[i];
			d[i] = b[i];
		}

		sort(a+1, a+1+n);
		sort(b+1, b+1+m);

		REP(i,1,n) LeftA[i] = LeftA[i-1] + a[i];
		FORD(i,1,n) RightA[i] = RightA[i+1] + a[i];
		
		REP(i,1,m) LeftB[i] = LeftB[i-1] + b[i];
		FORD(i,1,m) RightB[i] = RightB[i+1] + b[i];

		ll res = 0;
		REP(i,1,n) {
			ll *f = upper_bound(b+1,b+m+1,c[i]);
			int index = f - b - 1;
//			print(index);
			res += i * (index*c[i] - LeftB[index] + RightB[index + 1] - (m - index) * c[i]);

		}

		REP(i,1,m) {
			ll *f = upper_bound(a+1,a+n+1,d[i]);
			int index = f - a - 1;
//			print(index);
			res -= i * (index * d[i] - LeftA[index] + RightA[index + 1] - (n - index) * d[i]);
		}
		printf("%ld\n",res);
		reset();
	}
}
