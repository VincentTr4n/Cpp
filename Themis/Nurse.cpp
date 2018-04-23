#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x) * (x))
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vll vector<ll>
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;
ll MOD = 1000000000+7;

// Cn = An + Bn
// An = Bn-1
// Bn = An-i  K1<=i<=K2


int main() {
	ll n,k1,k2,A[1997],B[1997];
	cin>>n>>k1>>k2;
	A[0]=B[0]=1;
	REP(i,1,n+1){
		A[i]=B[i-1];
		B[i]=0;
		for(j=k1;j<=k2;j++) if(j>=0 && j<=i) B[i]+=A[i-j];
	}
	print(A[n]+B[n]);
	return 0;
}
