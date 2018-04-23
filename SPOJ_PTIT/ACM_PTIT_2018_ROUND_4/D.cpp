#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
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
int i,j;

const ll M = 1e9 + 7, maxn = 10000005;
ll P[maxn];

void sang() {
	P[1] = 1;
	P[0] = 1;
	for(ll i = 2; i < maxn; i++) {
		if(P[i] == 0) {
			for(ll j = i; j*i < maxn; j++) P[i*j] = 1;
		}
	}
}

ll modInverse(ll a, ll b) {
	ll y0 = 0, y1 = 1,y, q, xr, r, tmp = b;

	while(a > 0) {
		r = b % a;
		if(r == 0) break;
		q = b / a;
		y = y0 - y1*q;
		y0 = y1;
		y1 = y;
		b = a;
		a = r;
	}

	return (y < 0)?(y + tmp) : y;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin>>n;
	ll rs = 1;
	ll top = 1;
	ll fac = 1;
	ll bot = 1;
	REP(i,2,n+1) {
		fac = fac * i;
		fac = fac % M;
		if(P[i] == 0) {
			top = top * (i - 1);
			top = top % M;
			bot = bot * i;
			bot = bot % M;
		}
	}

	rs = (fac * top) % M;
	rs = (rs * modInverse(bot, M)) % M;
	print(rs);
	return 0;
}
