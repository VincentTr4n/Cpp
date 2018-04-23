#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
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
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;

int N[] = {0,1,1,1,2,1,2,2,2,3};
int S[] = {1,1,1,1,2,1,2,1,1,3};

void solve(ll w, int c,ll &n,ll &s) {
	if(w<10){
		n+=N[w]; s*=S[w]; return;
	}
	if(c==0){
		long long k = w%5+5;
		w = w-k;
		n+=w/5+N[k];
		s*=S[k];
		return ;
	}
	n+=N[w%10]; s*=S[w%10];
	solve(w/10,c-1,n,s);
}
void solution() {
	ll w,n=0,s=1,c;
	cin>>w>>c;
	if(w%1000!=0) {
		cout<<0<<endl;
		return;
	}
	solve(w/1000,c,n,s);
	cout<<n<<" "<<s<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t-- >0) solution();
	return 0;
}
