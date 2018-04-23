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

ll n,m,a,b,dp[1004][1997];

int main() {
	cin>>n>>m;
	rep(i,m+1) dp[0][i]=0;
	REP(i,1,n+1){
		cin>>a>>b;
		rep(j,m+1){
			if(j<a) dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(dp[i-1][j],(b*a/100) + dp[i-1][j-a]);
		}
	}
	print(dp[n][m]);

	return 0;
}
