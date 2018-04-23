#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
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
ll i,j;


string toBinary(ll x){
	string s = "";
	while(x != 0){
		int t = x % 2;
		x /= 2;
		s+=(char)(t+'0');
	}
	return s;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	int t;
	cin>>t;
	
	while(t-- >0){
		ll x;
		cin>>x;
		string bin = toBinary(x);
//		print(bin);
		ll res = 0;
		rep(i,len(bin)) if(bin[i]=='0') res+=(ll)pow(2,i);
		print(res);
 	}
	
	
	
	return 0;
}
