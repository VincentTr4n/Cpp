#include <bits/stdc++.h>
#include <numeric>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
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
#define MOD 1000000007
#define print(x) cout<<(x)<<endl
using namespace std;

ll MIN = 1e18;
ll a[26];


int main() {
	SPEED;
	freopen("sc.txt","r",stdin);
	int t;
	cin>>t;
	while(t--) {
		REP(i,1,26) cin>>a[i];
		ll res = 0, sum = 0;
		int index=1;
		ll L[27],R[27];
		L[0]=R[0]=0;
		REP(i,1,26) L[i] = L[i-1] + a[i];
		for(int i=26;i>=1;i--){
			R[index] = R[index-1]+a[i];
//			cout<<R[index]<<" ";
			index++;
		}
		int j=0;
		ll l=0,r=0;
		REP(i,1,26){
			while(j<26 && L[j]<2*R[i]) j++;
			sum += L[j]-R[i];
		}
		print(sum);
//		cout<<l<<" - "<<r<<endl;
	}
	
	return 0;
}
