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
	freopen("in.txt","r",stdin);
	int t,x,y;
	cin >> t;
	map<int,bool> dx;
	map<int,bool> dy;
	while(t--){
		cin >> x >> y;
		dx[x] = dy[y] = 1;
		cin >> x >> y;
		dx[x] = dy[y] = 1;
		cin >> x >> y;
		dx[x] = dy[y] = 1;
		cin >> x >> y;
		dx[x] = dy[y] = 1;
		
		print((len(dx) == 2 && len(dy) == 2)?"YES":"NO");
		
		dx.clear();
		dy.clear();
	}
	
	
	
	
	return 0;
}

