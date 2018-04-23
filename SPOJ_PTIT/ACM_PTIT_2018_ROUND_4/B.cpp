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

ll x[300005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); 
	
	int n;
	cin>>n;
	rep(i,n) cin>>x[i];
	sort(x,x+n);
	if(n%2==0) print(x[n/2-1]);
	else print(x[n/2]);
	
	return 0;
}
