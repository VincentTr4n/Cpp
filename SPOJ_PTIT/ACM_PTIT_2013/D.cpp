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



int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if (n==0) cout<<"0"<<endl;
		else if (n==1) cout<<"1"<<endl;
		else if (n==2) cout<<"4"<<endl;
		else if (n==3) cout<<"5"<<endl;
		else if (n%2==0) cout<<(n)*(n/2)<<endl;
		else cout<<(n/2+1)*(n/2+1)+(n/2)*(n/2)<<endl;
	}
	return 0;
}

