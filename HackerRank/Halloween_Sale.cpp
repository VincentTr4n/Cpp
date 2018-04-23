#include <bits/stdc++.h>
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
	int p,d,m,s;
	cin>>p>>d>>m>>s;
	int cnt = 0;
	int tmp = 0;
	while(tmp<=s){
		print(p);
		tmp+=p;
		p-=d;
		if(p<=m) p=m;
		cnt++;
	}
	print(cnt-1);
	
	return 0;
}
