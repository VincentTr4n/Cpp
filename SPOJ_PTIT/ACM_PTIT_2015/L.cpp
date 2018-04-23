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

int G[105][105];
int n,d=0;

void solve(int u,int v){
	if(u == v) return;
	int vis[n+1] = {};
	int x = min(u,v);
	int y = max(u,v);
	vis[x]=vis[y]=1;
	REP(i,1,n){
		if(G[x][i]==1 && vis[i]==0){
			d++;
			solve(i,v);
			cout<<u<<" - "<<i<<endl;
		}
	}
	memset(vis,0,sizeof(vis));
}


int main() {
	int t,m,u,v,x,y;
	cin>>t;
	while(t--){
		cin>>n>>m>>u>>v;
		REP(i,1,n) REP(j,1,n) G[i][j]=0;
		rep(i,m){
			cin>>u>>v;
			G[u][v] = G[v][u] = 1;
		}
		print("--------------------------");
		solve(u,v);
		print(d);
		d = 0;
		
	}
	return 0;
}

