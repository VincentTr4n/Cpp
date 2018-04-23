#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define lens(arr) arr.length()
#define print(x) cout<<x<<endl
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

using namespace std;
int i,j;
const ll inf = -11091997;

ll a[1009][1009],dp[1007][1007];


int main() {
	ll n,m;
	cin>>n>>m;
	rep(i,n) rep(j,m) cin>>a[i][j];
	
	rep(i,n) rep(j,m) {
		if(i==0 && j>0) a[i][j]+= a[i][j-1];
		if(j==0 && i>0) a[i][j]+= a[i-1][j];
		if(i>0 && j>0) a[i][j] = max(a[i-1][j], a[i][j-1]) + a[i][j];
	}
	
	print(a[n-1][m-1]);
	
//	dp[0][0]=a[0][0];
//	REP(i,1,m) dp[0][i]+=dp[0][i-1]+a[0][i];
//	REP(i,1,n) dp[i][0]+=dp[i-1][0]+a[i][0];
//
//	REP(i,1,n) REP(j,1,m) {
//		dp[i][j]=max(dp[i-1][j]+a[i][j],dp[i][j-1]+a[i][j]);
//	}
//	
//	print(dp[n-1][m-1]);
	return 0;
}
