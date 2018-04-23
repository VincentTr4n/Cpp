#include <bits/stdc++.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
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
int i,j;

int n,k,a[100005];


bool check(int mid,int t){
	int s = 0;
	rep(i,n){
		s += a[i];
		if(s > mid) s = a[i], t--;
		if(t < 1) return false;
	}
	return true;
}

void oneTest(){
	cin >> k >> n;
	rep(i, n) cin >> a[i];
	int L = -1, R = 0;
	rep(i, n) R += a[i], L = max(L, a[i]);
	int res = R;
	while(L <= R){
		int mid = (L + R)/2;
		if(check(mid, k)) R = mid - 1, res = R + 1;
		else L = mid + 1;
	}
	print(res);
}


int main() {
	int t;
	cin>>t;
	while(t-- >0) oneTest();
	return 0;
}
