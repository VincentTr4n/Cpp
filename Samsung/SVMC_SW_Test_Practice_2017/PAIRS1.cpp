#include <bits/stdc++.h>
#include <numeric>
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

ll a[100006];

int bs(ll x,int l,int r){
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid]==x) return mid;
		else if(a[mid]>x) r = mid - 1;
		else  l = mid + 1;
	}
	return -1;
}

int main() {
	ll n,k;
	cin>>n>>k;
	rep(i,n) cin>>a[i];
	sort(a,a+n);
	ll cnt = 0;
	rep(i,n){
		if(bs(a[i]+k,i,n-1)!=-1) cnt++;
	}
	print(cnt);
	
	return 0;
}
