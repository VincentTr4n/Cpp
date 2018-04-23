#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define pl pair<long,long>
#define vi vector<int>
#define vpl vector<pl>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;


bool cmp(pair<ll,ll> a, pair<ll,ll> b){
	return min(a.se - a.fi,a.fi) > min(b.se - b.fi,b.fi);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); 
	ll n,k,x,y;
	cin>>n>>k;
	vector<pair<ll,ll>> a;
	rep(i,n){
		cin>>x>>y;
		a.add(make_pair(x,y));
	}
	sort(all(a),cmp);
	ll res = 0;
//	rep(i,len(a)){
//		cout<<a[i].fi<<" -- "<<a[i].se<<endl;
//	}
	rep(i,k){
		a[i].fi *= 2;
		res+=min(a[i].fi,a[i].se);
	}
	REP(i,k,n){
		res+=min(a[i].fi,a[i].se);
	}
	print(res);
	return 0;
}
