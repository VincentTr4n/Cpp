#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <unordered_map>
#include <numeric>
#include <vector>
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
int i,j;

ll MOD = 1000000009;

ll POW(ll a,ll b){
	if(b == 0) return 1;
	if(b%2 == 0) return (POW(a,b/2) * POW(a,b/2) ) % MOD;
	return ((POW(a,b/2) * POW(a,b/2) % MOD) * a) % MOD;
}

int main() {
	ll n,m,k;
	cin>>n>>m>>k;
	
	if((n/k) <= n - m){
		ll res = m%MOD;
		print(res);
	}
	else{
		ll res;
		ll t = k * (n - m);
		res = (k-1) * (n - m) % MOD;
		ll a = n - t;
		res = (res + a % k) % MOD;
		ll b = a / k;
		res = (((1 - POW(2, b + 1)) * (-1) - 1) * k) % MOD + res;
		print(res%MOD);
	}
	return 0;
}
