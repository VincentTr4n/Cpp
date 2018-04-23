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
int i,j;

int a[1000006];

int main() {
	int n;
	vi ans;
	cin>>n;
	rep(i,n) cin>>a[i];
	sort(a,a+n);
	rep(i,n) if(a[i]%3==0) ans.add(a[i]);
	rep(i,n) if(a[i]%3==1) ans.add(a[i]);
	rep(i,n) if(a[i]%3==2) ans.add(a[i]);
	
	rep(i,n) cout<<ans[i]<<" ";

	return 0;
}
