#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vll vector<ll>
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i;

int main() {
	int n,L,T;
	cin>>T;
	while(T--) {
		cin>>n;
		string a[10004];
		rep(i,n) cin>>a[i];
		sort(a,a+n);
		vi lcp(n+1);
		rep(i,n-1) {
			L = a[i].length();
			int cnt = 0,j=0;
			while(j<L) {
				if(a[i][j]==a[i+1][j]) cnt++;
				else break;
				j++;
			}
			lcp[i] = cnt;
		}
		bool ok = true;
		rep(i,n-1) if(lcp[i]==a[i].length()) {ok = false;break;}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
