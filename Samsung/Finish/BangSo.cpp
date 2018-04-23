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

ll n,m,a[1006][1006];

int main() {
	cin>>n>>m;
	rep(i,n) rep(j,m) cin>>a[i][j];
	rep(i,n) rep(j,m) {
		if(i==0 && j>0) a[i][j] += a[i][j-1];
		if(j==0 && i>0) a[i][j] += a[i-1][j];
		if(i>0 && j>0) a[i][j] += max(a[i-1][j], a[i][j-1]);
	}
	print(a[n-1][m-1]);
	return 0;
}
