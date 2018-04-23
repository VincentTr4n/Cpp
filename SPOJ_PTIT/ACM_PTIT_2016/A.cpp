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



int main() {
	ll _a, _b;
	cin>>_a>>_b;
	ll a = max(_a, _b);
	ll b = min(_a, _b);
	if(a == b){
		print(1);
		return 0;
	}
	ll d = a - b;
	ll res = d;
	ll tmp = (a + res)*(b + res) / __gcd(a + res, b + res);
	for(ll i = 2; i * i <= d; i++){
		if(d%i == 0){
			if(i < res){
				ll m = (a + i) * (b + i) / __gcd(a + i, b + i);
				if(m <= tmp) tmp = m, res = i;
			}
			
			ll j = d/i;
			if(j < res){
				ll m = (a + j) * (b + j) / __gcd(a + j, b + j);
				if(m <= tmp) tmp = m, res = j; 
			}
		}
	}
	print(res);
	
	return 0;
}

