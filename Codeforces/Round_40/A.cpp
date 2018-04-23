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
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(len(s)<2) print(len(s));
	else{
		int cnt = 0;
		for(int i=0;i<len(s)-1;i++){
			if(s[i]=='U' && s[i+1]=='R'){
				 cnt++;
				 i++;
			}
			else if(s[i]=='R' && s[i+1]=='U'){
				cnt++;
				i++;
			}
		}
		print(len(s)-cnt);
	}
	return 0;
}
