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



int main() {
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(n == 0) print(1);
		else{
			int cnt = 0;
			for(ll i = 0; i <= sqrt(n); i++){
				ll a = n - i*i;
				ll b = sqrt(a);
				if(b*b + i*i == n){
					cnt++;
					//cout << b << " + " << i << endl;
				}
			}
			print(cnt/2);
		}
	}
	return 0;
}
