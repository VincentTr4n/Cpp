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

bool cmp(ii a,ii b) {
	return a.fi*a.se > b.fi*b.se;
}

long S(ii a){
	return a.fi*a.se;
}

int main() {
	int n,a,b;
	cin>>n;
	vii v(n);
	rep(i,n){
		cin>>a>>b;
		v[i] = make_pair(a,b);
	}
	sort(all(v),cmp);
	rep(i,n-1) if(S(v[i])!=S(v[i+1])) break;
	i++;
	if(i<n) cout<<v[i].fi<<" "<<v[i].se;
	else cout<<"NO";
	return 0;
}
