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

#define N 100006

ll a[N], L[N];

bool cmp(ll x, ll y){
	return x > y;
}

int main() {
	freopen("in.txt","r",stdin);
	int n;
	cin >> n;
	REP(i, 1, n) cin >> a[i];
	L[0] = 0;
 	sort(a + 1, a + n + 1);
 	REP(i, 1, n) L[i] = L[i - 1] + a[i];
	ll A = 0, B = 0, C = 0;
	
 
	return 0;
}

