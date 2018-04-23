#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
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


ll factorial(int x){
	ll res = 1;
	for(int i=1;i<=x;i++) res*=i;
	return res;
}


int main() {
	int t;
	cin>>t;
	ll n;
	while(t--){
		cin>>n;
		ll res = 0;
		int i = 1;
		while(n>0){
			res+=factorial(i)*(n%10);
			i++;
			n/=10;
		}
		print(res);
	}
	return 0;
}

