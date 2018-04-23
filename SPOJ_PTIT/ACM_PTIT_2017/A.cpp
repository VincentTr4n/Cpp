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

#define N 10000003

bool primes[N];
ll buffer[N];


void sieve(){
	memset(primes,1,sizeof(primes));
	primes[0] = primes[1] = 0;
	for(ll i = 2; i*i <= N;i++){
		if(primes[i]){
			for(ll j = i*i; j <= N; j += i){
				primes[j] = 0;				
			}
		}
	}
	
}

void init(){
	vll a;
	memset(buffer,0,sizeof(buffer));
	for(ll i = 1; i <= N; i++) if(primes[i]) a.add(i);
	for(ll i = 0; i < len(a); i++)
	for(ll j = a[i]; j <= N; j+=a[i]) buffer[j]++; 
}


int main() {
	sieve();
	init();
	
	int t ;
	cin >> t;
	rep(tt,t){
		ll x, y, k;
		cin >> x >> y >> k;
		ll cnt = 0;
		for(ll i = x; i <= y; i++) if(buffer[i] == k) cnt++;
		printf ("Case #%d: %ld\n", tt + 1, cnt);
	}	
	return 0;
}

