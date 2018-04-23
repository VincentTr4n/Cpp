#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
#include <vector>
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(int i=b;i>=a;i--)
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

int a[1000006];
int cnts[1005] = {};

int main() {
	int n,m;
	cin>>n>>m;
	int res = 0;
	rep(i,m){
		cin>>a[i];
		cnts[a[i]]++;
		bool ok=1;
		REP(j,1,n+1) if(cnts[j]==0){
			ok=0;
			break;
		}
		if(ok){
			res++;
			REP(j,1,n+1) if(cnts[j]>0) cnts[j]--;
		}
	}
	print(res);
	
	
	return 0;
}
