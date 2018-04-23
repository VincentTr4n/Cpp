#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <unordered_map>
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
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;

const ll inf =  1e18;

ll a[100006];

ll getC3(int n){
	return n*(n-1)*(n-2)/6;
}
ll getC2(int n){
	return n*(n-1)/2;
}

int main() {
	int n;
	cin>>n;
	rep(i,n) cin>>a[i];
	sort(a,a+n);
	ll min1=1,min2=1,min3=1;
	rep(i,n-1) if(a[i]!=a[i+1]) break; else min1++;
	++i;
	for(;i<n-1;i++) if(a[i]!=a[i+1]) break; else min2++;
	++i;
	for(;i<n-1;i++) if(a[i]!=a[i+1]) break; else min3++;
	
	if(min1>=3) print(getC3(min1));
	else if(min1==2) print(min2);
	else if(min1==1){
		if(min2>=2) print(getC2(min2));
		else print(min3);
	}
	return 0;
}
