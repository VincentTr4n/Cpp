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

int a[1005], res[1005], cnts[100005];
int main() {
	int t;
	cin>>t;
	while(t--) {
		int N,x;
		cin>>N;
		
		memset(res,0,sizeof(res));
		rep(i,N) cin>>a[i];
		rep(i,N){
			cin>>x;
			cnts[a[i]]=x;
		}
		sort(a,a+N);
		rep(i,N) {

			int tmp=cnts[a[i]];
			rep(j,N) {
				if(tmp==0 && res[j]==0) {
					res[j]=a[i];
					break;
				}
				if(res[j]==0) tmp--;
			}

		}
		rep(i,N) cout<<res[i]<<" ";
		printf("\n");
	}
	return 0;
}
