#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,a,b) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;

#define MAX 1000006

ll a[MAX] = {};

int main() {
	ll n,x;
	cin>>n;
	rep(i,n){
		cin>>x;
		a[x]++;
	}
	rep(i,MAX){
		if(a[i]){
			while(a[i]){
				print(i);
				a[i]--;
			}
		}
	}
	
	return 0;
}

