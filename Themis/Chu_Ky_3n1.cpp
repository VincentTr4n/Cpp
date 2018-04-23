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
#define print(x) cout<<(x)<<endl

using namespace std;
int i,j,k;
const ll inf = -11091997;

ll a[1000006];

int main() {
	ll n,cnt=0;
	cin>>n;
	a[0]=n;
	while(n!=1){
		if(n%2==0) n/=2;
		else n=3*n+1;
		a[++cnt]=n;
	}
	cout<<(cnt+1)<<" ";
	rep(i,cnt+1) cout<<a[i]<<" ";
	
	return 0;
}
