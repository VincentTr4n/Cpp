#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
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


ll a[10000006];
int main() {
	ll n,res=1,start=0,next=0;
	cin>>n;
	rep(i,n) cin>>a[i];
	i=0;
	while(i<n-1){
		while(i<n-1 && a[i]<=a[i+1]) i++;
		while(i<n-1 && a[i]>=a[i+1]){
			if(i<n-1 && a[i]>=a[i+1]) next=i+1;
			i++;
		}
		res=max(res,i-start+1);
		start=next;
	}
	cout<<res;
	return 0;
}
