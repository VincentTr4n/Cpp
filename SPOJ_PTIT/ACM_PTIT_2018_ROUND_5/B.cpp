#include <bits/stdc++.h>
#include <numeric>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
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

int a[1006];

int main() {
	SPEED;
	
	int n,m;
	cin>>n;
	REP(i,1,n) cin>>a[i];
	cin>>m;
	while(m--){
		int x,y;
		cin>>x>>y;
		int L = y-1;
		int R = a[x]-y;
		if(x==1){
			a[x+1]+=R;	
		}
		else if(x==n){
			a[x-1]+=L;
		}
		else{
			a[x-1]+=L;
			a[x+1]+=R;
		}
		a[x]=0;
	}
	REP(i,1,n) print(a[i]);
	return 0;
}
