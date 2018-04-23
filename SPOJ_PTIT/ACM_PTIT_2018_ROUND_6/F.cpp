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

int a[1000006];
int cnts[100006]= {};

int findMax(int n) {
	int res=-1;
	rep(i,n) if(a[i]>res) res=a[i];
	return res;
}

int ones(int x) {
	int res = 0;
	while (x > 0) {
		++res;
		x &= (x - 1);
	}
	return res;
}

long long kBitDifferencePairs(int a[], int n, int k) {
	int MAX = findMax(n);
	rep(i,n) cnts[a[i]]++;
	ll ans = 0;
	if (k == 0) {
		rep(i,MAX+1) ans += (cnts[i] * (cnts[i] - 1)) / 2;
		return ans;
	}

	rep(i,MAX+1) {
		if (!cnts[i])
			continue;

		for (int j = i + 1; j <= MAX; ++j) {
			if (ones(i ^ j) == k) ans += cnts[i] * cnts[j];
		}
	}
	return ans;
}

int main() {
	SPEED;
	int n,k;
	cin>>n>>k;
	rep(i,n) cin>>a[i];

	print(kBitDifferencePairs(a,n,k));
	return 0;
}
