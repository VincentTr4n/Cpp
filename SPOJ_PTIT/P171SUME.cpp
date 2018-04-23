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

int inf = -1e6;

int a[100006];

int main() {
	//freopen("in.txt","r",stdin);
	int n;
	cin >> n;
	rep(i, n) cin >> a[i];	
	int sum1 = 0, sum2 = 0, tmp = a[0];
	REP(i, 1, n - 1){
		tmp = tmp > 0 ? tmp + a[i] : a[i];
		sum1 = max(sum1, tmp);
	}
	tmp = inf;
	rep(i, n){
		if(a[i] > 0) sum2 += a[i];
		tmp = max(inf, a[i]);
	}
	if(tmp < 0) sum2 = tmp;
	cout << sum1 << " " << sum2;
	return 0;
}

