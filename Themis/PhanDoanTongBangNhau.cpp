#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
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
#define lens(arr) arr.length()
#define print(x) cout<<x<<endl

using namespace std;
int i,j;
const ll inf = -11091997;

int main() {
	ll n,a[10007],L[10009]={};
	map<long,bool> M;
	ll t,tc;
	cin>>t;
	vll ans(t+1);
	while(t-- >0) {
		ll curr=0,MAX=-1;
		M.clear();
		cin>>tc>>n;
		rep(i,n) {
			cin>>a[i];
			curr+=a[i];
			L[i]=curr;
			M[L[i]]=1;
			MAX=max(a[i],MAX);
		}
		rep(i,n) {
			if(L[i]>=MAX) {
				long next = L[i],cnt=0;
				while(M[next] && next<=L[n-1]) {
					next+=L[i];
					cnt++;
				}
				if(L[i]*cnt == L[n-1]) {
					ans[tc]=L[i];
					break;
				}
			}
		}
	}
	REP(i,1,len(ans)) cout<<i<<" "<<ans[i]<<endl;
	return 0;
}
