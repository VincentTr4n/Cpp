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

ll n,a[1000006],sum=0,tmp=0;

int main() {
	cin>>n;
	rep(i,n) cin>>a[i],sum+=a[i];
	sort(a,a+n);
	for(i=n-1;i>=0;i-=3) tmp+=max((a[i]/3+a[i-1]/3+a[i-2]/3),a[i-2]);
	ford(j,i+1) tmp+=a[i]/3;
	print(sum-tmp);
	return 0;
}
