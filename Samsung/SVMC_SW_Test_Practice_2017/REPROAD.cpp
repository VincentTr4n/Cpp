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

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		int a[n+4];
		rep(i,n) cin>>a[i];
		int font=0,back=0;
		int res=0,cnt=0;
		while(back<n){
			if(a[back]==0) cnt++;
			if(cnt<=k) res=max(res,back-font+1);
			else{
				while(cnt>k && font<back){
					if(a[font]==0) cnt--;
					font++;
				}
			}
			back++;
		}
		print(res);
	}
	return 0;
}
