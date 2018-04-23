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

map<ll,int> buffer;

bool isPrime(ll x){
	if(x == 1 || x == 0) return 0;
	if(x <=3) return 1;
	for(int i = 2;i*i <= x; i++) if(x%i==0) return 0;
	return 1;
}


void init(){
	for(ll x = 1; x <= 20; x++){
		ll N = (ll)1<<x;
		ll tmp = N*2 - 1;
		if(isPrime(tmp)) buffer[N] = 1;
	}	
	
}


int main() {
	init();
	
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin >> n;
		print(buffer[n]?"YES":"NO");
	}
	return 0;
}

