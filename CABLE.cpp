#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(int i=b;i>=a;i--)
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

ll a[1000005];
ll n,k,sum=0;

ll solve(){
	ll MAX = sum/k;
	while(MAX--){
		ll tmp = 0;
		ll res = 0;
		rep(i,n){
			if(MAX>=a[i])
				tmp+=a[i]/MAX;
			else MAX = a[i];
		}
		if(tmp == k) return MAX;
	}
	return 0;
}

int main() {
	freopen("cable.txt","r",stdin);
	cin>>n>>k;
	rep(i,n){
		cin>>a[i];
		sum+=a[i];
	}
	
	print(solve());
	
	return 0;
}
