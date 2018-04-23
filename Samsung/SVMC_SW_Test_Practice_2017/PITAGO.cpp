#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
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

ll a[2000006] = {};

void generate(){
	for(int i=1;i<=1000;i++){
		for(int j=i;j<=1000;j++) a[i*i+j*j]++;
	}
}

int main(){
	int n,cnt=0;
	cin>>n;
	generate();
	for(int i=1;i<=n;i++){
		if(a[i*i]) cnt+=a[i*i];
	}
	print(cnt);
	return 0;
}
