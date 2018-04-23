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

#define MAX_N 50005
const ll MOD = 1000000007;
ll Hash[MAX_N],Pow[MAX_N],RHash[MAX_N],n;


ll getHash(int l,int r){
	return (Hash[r] - Hash[l-1]*Pow[r-l+1] + MOD*MOD)%MOD; 
}
ll getRHash(int l,int r){
	return (RHash[n-l+1] - RHash[n-r]*Pow[r-i+1] + MOD*MOD)%MOD;
}
bool check(int d){
	for(int k=1;k+d-1<=n;k++) if(getHash(i,i+d-1)==getRHash(i,i+d-1)) return true;
	return false;
}

int main() {
	string s;
	cin>>s;
	s=" "+s;
	Pow[0]=1;
	Hash[0]=RHash[0]=0;
	REP(i,1,n+1){
		Hash[i]=(Hash[i-1]*97 + s[i]-32)%MOD;
		RHash[i]=(RHash[i-1]*97 + s[n-i+1]-32)%MOD;
		Pow[i]=Pow[i-1]*97%MOD;
	}
	
	int l = 1, r = n-(n%2==0);
	while(l<r){
		int m = (l+r)/2;
		if(m%2==0) m++;
		if(check(m)) l=m;
		else r=m-2;
	}
	int res = l;
	l=0;
	r=n-n%2;
	while(l<r){
		int m = (l+r)/2;
		if(m%2!=0) m++;
		if(check(m)) l=m;
		else r=m-2;
	}
	if(l>res) res=l;
	cout<<res;
	return 0;
}
