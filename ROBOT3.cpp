#include <bits/stdc++.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
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

map<ll,bool> cache;

int main() {
	ll n,a,b,k;
	cin>>n>>a>>b>>k;
	ll index = 1;
	cache[index]=true;
	while(k--){
		ll left = index - b;
		ll right = index + a;
		cout<<left<<" - "<<right<<endl;
		if(left>=1 && !cache[left]) cache[index-=b]=true;
		else if(right<=n) cache[index+=a]=true;
		else if(left>=1) cache[index-=b]=true;
	}
	print(n-len(cache));
	return 0;
}
