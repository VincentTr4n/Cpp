#include <bits/stdc++.h>
#include <numeric>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
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

int a[100006];

int main() {
	SPEED;
	int n,m,d,x;
	cin>>n>>m>>d;
	int index=0;
	bool ok = 1;

	rep(i,n) rep(j,m) {
		cin>>x;
		a[index++]=x;
	}
	n=index;
	int nmin = 1e5;
	rep(i,n) if(a[i]<nmin) nmin=a[i];
	ll res1 = 0,res2 = 0;
	rep(i,n) {
		if(abs(a[i]-nmin)%d!=0) {
			print(-1);
			return 0;
		}
		res1+=abs(a[i]-nmin)/d;
	}
	sort(a,a+n);
	int mid = a[(n+1)/2-1];
	rep(i,n) {
		if(abs(a[i]-mid)%d!=0) {
			print(-1);
			return 0;
		}
		res2+=abs((a[i]-mid))/d;
	}

	print(min(res1,res2));

	return 0;
}
