#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
#include <vector>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
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

int a[100006];
int t[100006];
ll L[1000006];


int main() {
	int n,k;
	cin>>n>>k;
	L[0]=0;
	REP(i,1,n){
		cin>>a[i];
		L[i]=L[i-1]+a[i];
	}
	REP(i,1,n) cin>>t[i];
	ll res = 0;
	ll sum = 0;
	REP(i,1,n){
		if(t[i]){
			sum+=a[i];
		}
		else{
			if(i<=n-k+1){
				ll tmp = L[i+k-1]-L[i-1];
				ll tmp1 =0;
				int j = i+k;
				while(t[j] && j<=n) tmp1+=a[j++];
				if(tmp+sum+tmp1>res){
					res=tmp+sum+tmp1;
				}
			}
			sum=0;
		}
	}

	print(res);
	
	return 0;
}
