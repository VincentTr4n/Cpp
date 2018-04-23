#include <bits/stdc++.h>
#include <numeric>
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

int n,x0,y0;

bool cmp(pi a,pi b){
	return (abs(a.fi-x0) < abs(b.fi-x0)) && (abs(a.se-y0) < abs(b.se-y0));
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); 
	
	freopen("B.txt", "r", stdin);
	
	int x,y;
	cin>>n>>x0>>y0;
	vpi a;
	rep(i,n){
		cin>>x>>y;
		a.add(make_pair(x,y));
	}
	sort(all(a),cmp);
	rep(i,n) cout<<a[i].fi<<" | "<<a[i].se<<endl;
	print("----------------------------");
	bool vis[n+2];
	memset(vis,0,sizeof(vis));
	int cnt = 0;
	rep(i,n){
		int dx = x0 - a[i].fi;
		int dy = y0 - a[i].se;
		rep(j,n){
			int dx1 = x0 - a[j].fi;
			int dy1 = y0 - a[j].se;
			if(dx%dx1==0 && dy%dy1==0 && !vis[j]) vis[j] = 1;
		}
		for(int k=0;k<n;k++) cout<<vis[k];
		print("");
		print("----------------------------------");
		cnt++;
		bool ok = false;
		for(int k=0;k<n;k++) if(!vis[k]){
			ok=true;
			break;
		}
		if(!ok) break;
	}
	print(cnt);
	
	return 0;
}
