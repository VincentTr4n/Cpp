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

#define N 10000006

ll L[N] = {};

void init(ll a, ll b){
	for(int i = 1; i < b + 4; i++)
	for(int j = i; j < b + 4; j += i) L[j] += i;
	//for(int i = 1; i < N; i++) L[i] += L[i-1];
}


ll S1(ll a, ll b){
	ll res = 0;
	for(ll x = a; x <= b; x++){
		res += abs(2 * x - L[x]);
	}
	return res;
}




int main() {
	freopen("in.txt","r",stdin);
	ll a, b, res = 0;
	cin >> a >> b;
	init(a, b);
	print(S1(a,b));

	return 0;
}

