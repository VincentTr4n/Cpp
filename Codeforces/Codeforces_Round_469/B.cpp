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
#define ull unsigned long long
#define ld long double
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;

ll a[100006]={},b[100006]={};

int main() {
	ll n,m,tmp;
	cin>>n>>m;
	map<ll,bool> mp;
	REP(i,1,n+1){
		cin>>tmp;
		a[i]=a[i-1]+tmp;
		mp[a[i]]=true;
	}
	REP(i,1,m+1){
		cin>>tmp;
		b[i]=b[i-1]+tmp;
	}
	ll res = 0;
	REP(i,1,m+1){
		if(mp[b[i]]) res++;
	}
	print(res);
	return 0;
}
