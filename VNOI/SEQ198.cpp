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

bool cmp(int a,int b){
	return a>b;
}

int main() {
	ll n,cnt=0,a[2006];
	cin>>n;
	rep(i,n) cin>>a[i];
	sort(a,a+n,cmp);
	rep(i,n) REP(j,i+1,n){
		if(a[i]-a[j]==1 || a[i]-a[j]==8 || a[i]-a[j]==9) cnt++;
	}
	if(cnt==0) cout<<1;
	else cout<<cnt;
	return 0;
}
