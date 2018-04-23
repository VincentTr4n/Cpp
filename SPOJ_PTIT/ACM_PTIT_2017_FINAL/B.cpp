#include <bits/stdc++.h>
#include <numeric>
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



int main() {
	freopen("B.txt","r",stdin);
	int t;
	cin>>t;
	while(t-- >0){
		ll a;
		cin>>a;
		int cnt = 1;
		ll tmp = 1;
		int up = 2;
		while(tmp*up<a){
			up*=up;
			tmp*=up;
			cnt++;
		}
		cout<<tmp<<" - "<<cnt<<endl;
	}
	return 0;
}
