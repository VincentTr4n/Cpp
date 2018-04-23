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
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;

int a[1<<12+9];

int main() {
	int n,cnt=0;
	cin>>n;
	REP(i,2,1<<(n+2)-1) cin>>a[i];
	FORD(i,1,n){
		int index=1<<(i-1);
		for(j=1<<i;j<1<<(i+1);j+=2){
			int nmax = max(a[j],a[j+1]);
			int nmin = min(a[j],a[j+1]);
			cnt+=nmax-nmin;
			a[index++]+=nmax;
		}
//		for(j=1<<(i-1);j<1<<(i);j++) cout<<a[j]<<" ";
//		cout<<endl;
	}
	print(cnt);
	return 0;
}
