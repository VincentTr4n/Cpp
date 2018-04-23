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
#define lens(arr) arr.length()
#define print(x) cout<<x<<endl

using namespace std;
int i,j;

// a=vo , b=chong
// step 1:
// 0 1 2 3 4 5
// 1 1 2 3 4 5
// 2 0 0 0 0 0
// step 2:
// 0 1 2 3 4 5
// 1 1 2 3 4 5
// 2 2 2 2 3 4
// ans = 4
// solution:
// if(s1[i-1]==[j-1]) dp[i][j]=dp[i-1][j-1] (not edit)
// else dp[i][j] = 1 + min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1])
//						      insert     remove    replace    

int min(int a,int b,int c){
	return min(min(a,b),c);
}

int main() {
	string a,b;
	cin>>a>>b;
	
	int n=lens(a),m=lens(b),dp[n+1][m+1];
	rep(i,n+1) rep(j,m+1) dp[i][j] = 0;
	
	rep(i,m+1) dp[0][i] = i;
	rep(i,n+1) dp[i][0] = i;
	
	REP(i,1,n+1) REP(j,1,m+1){
		if( a[i-1 ]== b[j-1] ) dp[i][j] = dp[i-1][j-1];
		else dp[i][j] = min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]) + 1;
	}
	
	print(dp[n][m]);
	return 0;
}
