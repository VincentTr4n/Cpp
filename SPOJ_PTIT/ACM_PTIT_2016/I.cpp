#include <bits/stdc++.h>
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
#define print(x) cout<<(x)<<endl
#include <stack>
using namespace std;



int main() {
	int t;
	cin>>t;
	while(t--){
		int n, m, x, sum = 0, cnt = 0;
		cin>>n>>m;
		rep(i,n){
			cin>>x;
			sum+=x;
			if(sum <= m) cnt++;
		}
		print(cnt);
		
	}
	return 0;
}

