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

ll n,a[20][20],res[20],tmp=0,m=999999999;
bool vis[20]= {};

void TRY(int k) {
	if(k==n) m=min(tmp+a[res[k-1]][res[0]],m);
	else for(int j=0; j<n; j++) {
			if(vis[j]==false && tmp+a[res[k-1]][j] < m) {
				res[k]=j;
				vis[j]=true;
				tmp+=a[res[k-1]][j];
				TRY(k+1);
				vis[j]=false;
				tmp-=a[res[k-1]][j];
			}
		}
}

int main() {
	cin>>n;
	rep(i,n) rep(j,n) cin>>a[i][j];
	res[0]=0;
	vis[0]=true;
	TRY(1);
	print(m);
	return 0;
}
