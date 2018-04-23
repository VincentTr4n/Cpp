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

ll a[100006];

bool cmp(ll t1,ll t2){
	return t1>t2;
}

ll sum(vll arr){
	ll res=0;
	rep(i,len(arr)) res+=arr[i];
	return res;
}

bool solve(ll tmp,int n){
	vll L;
	L.add(0);
	vll R;
	R.add(0);
	rep(j,n){
		if(sum(L)<sum(R)) L.add(a[j]);
		else R.add(a[j]);
	}
	bool res1 = sum(L)==sum(R);
	if(res1){
		
	}
	return res1;
}

int main() {
	SPEED;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		rep(i,n) cin>>a[i];
		ll tmp = a;
		sort(a,a+n,cmp);
		print(solve(tmp,n)?"YES":"NO");
	}
	
	return 0;
}
