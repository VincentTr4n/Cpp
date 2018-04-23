#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<=b;i++)
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


int sum(ll x) {
	int res = 0;
	while(x>0) {
		res+=x%10;
		x/=10;
	}
	return res;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n,s,cnt = 0;
	cin>>n>>s;
	ll tmp;
	if(s<10) {
		tmp = 10;
	} else {
		tmp = s + (10-s%10);
		while(tmp - sum(tmp)<s) tmp+=10;
	}
	if(tmp>n) cnt = 0;
	else cnt = (n-tmp+1);
	print(cnt);


//	int cnt1 = 0;
//	for(int i=1; i<=n; i++) {
//		if(i-sum(i)>=s) {
//			if(cnt1==0) print(i);
//			cnt1++;
//		}
//	}
//	print(cnt1);
	return 0;
}
