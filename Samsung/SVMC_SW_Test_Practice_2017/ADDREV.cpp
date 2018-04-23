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
int i,j;


ll reverse(ll x){
	ll res = 0;
	while(x>0){
		res = res*10 + x%10;
		x/=10;
	}
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t-- >0) {
		ll a,b;
		cin>>a>>b;
		print(reverse(reverse(a)+reverse(b)));
	}
	return 0;
}

