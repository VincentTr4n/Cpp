#include <bits/stdc++.h>
#include <numeric>
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
int i,j;

const ll MOD = 1e9+7;
const ll TEMP = 1e9+6;

ll Pow(ll p,ll k)
{
	if(k==0) return 1;
	long long t=Pow(p,k/2);
	t=(t*t)%MOD;
	if(k%2) t=(t*p)%MOD;
	return t;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	int n,x;
	cin>>n;
	
	map<int,int> cnts;
	rep(i,n) {
		cin>>x;
		cnts[x]++;
	}
	ll res=1;
	ll K = 1;
	for(map<int, int>::iterator it=cnts.begin();it!=cnts.end();it++) K=(K*(it->second+1))%TEMP;
	for(map<int, int>::iterator it=cnts.begin();it!=cnts.end();it++) res=(res*Pow(it->first,(K*(it->second)/2)%TEMP))%MOD;
	print(res);
	return 0;
}
