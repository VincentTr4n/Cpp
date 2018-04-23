#include <bits/stdc++.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
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
int i,j;


int L[105];


int main() {
	int n,m,x;
	cin>>n>>m;
	cin>>x;
	L[0]=x;
	REP(i,1,n){
		cin>>x;
		L[i] = L[i-1]+x;
	}
	int res = 0;
	rep(i,m){
		int a,b;
		cin>>a>>b;
		res+=max(L[b-1]-L[a-2],0);  
	}
	print(res);
	return 0;
}
