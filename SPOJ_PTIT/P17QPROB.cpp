#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
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

string a[10];


int main() {
	//freopen("in.txt","r",stdin);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		rep(i,n) cin >> a[i];
		rep(i,n-1) REP(j,i+1,n) if(a[j] < a[i]){
			string tmp = a[j];
			a[j] = a[i];
			a[i] = tmp;
		}
		string res = "";
		rep(i,n) res += a[i];
		print(res);
		
	}
	return 0;
}

