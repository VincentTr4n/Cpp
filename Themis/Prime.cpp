#include<iostream>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<string.h>
#include<vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
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

int main() {
	ll n;
	cin>>n;
	if(n==1 || n==2 || n==3) cout<<"YES";
	else if(!n&1) cout<<"NO";
	else{
		bool t = true;
		for(int i=2;i<=sqrt(n);i++) if(n%i==0){t=false;break;}
		cout<<(t?"YES":"NO");
	}
	
	return 0;
}
