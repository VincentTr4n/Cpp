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


string solve(int n){
	string res = "";
	REP(i,1,n) res+=to_string(i);
	bool even = 1;
	while(len(res)!=1){
		string tmp = "";
		if(even){
			for(int i=0;i<len(res);i+=2) tmp+=res[i];
			res = tmp;
			even = 0;
		}
		else{
			for(int i=1;i<len(res);i+=2) tmp+=res[i];
			res = tmp;
			even = 1;
		}
		//print(res);
	}
	return res;
}


int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin >> n;
		print(solve(n));
	}
	return 0;
}

