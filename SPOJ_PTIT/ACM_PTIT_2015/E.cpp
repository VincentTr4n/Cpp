#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
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

#define N 1000007

ll a[N];
ll b[N];

void init(){
	for(int i=1;i<N;i++)
	for(int j=i;j<N;j+=i) a[j]+=i,b[j]++;
	for(int i=1;i<N;i++) a[i]+=a[i-1],b[i]+=b[i-1];
}



int main() {
	init();
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		cout << (b[y]-b[x-1]) << " " << (a[y]-a[x-1]);
		cout << '\n';
	}
	return 0;
}

