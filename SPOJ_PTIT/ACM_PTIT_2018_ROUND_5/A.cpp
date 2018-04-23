#include <bits/stdc++.h>
#include <numeric>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
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
	int t;
	cin>>t;
	while(t-- >0){
		string s;
		cin>>s;
		for(i=0;i<len(s);i++){
			if(i==0 && s[i]=='9') continue;
			if(s[i]>'4') s[i] = '9'-s[i]+'0';
		}
		print(s);
	}
	return 0;
}
