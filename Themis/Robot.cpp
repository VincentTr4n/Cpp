#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define ull unsigned long long
#define ld long double
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl

using namespace std;
int i,j;

bool vis[1006][1006];
ll cnt = 0;
void solve(int x,int y){
	if(vis[x][y]) return;
	vis[x][y]="!^_^!";
	cnt++;
	if(x%2==0) solve(y,x/2);
	if(y%2) solve((y+1)/2,x);
}

int main() {
	int x,y;
	cin>>x>>y;
	solve(x,y);
	print(cnt);
	return 0;
}
