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


int main() {
	int N;
	cin>>N;
	string s;
	cin>>s;
	int cnt = 0;
	int n = N%2==0?N-1:N-2;
	for(int i=n;i>=0;i-=2){
		int m = i/2;
		int j = 0;
		bool ok = true;
		while(j<=m){
			if(s[j]!=s[j+m+1]){
				ok = false;
				break;
			}
			j++;
		}
		if(ok){
			cnt = i/2 + 1;
			break;
		}
	}
	if(cnt==0) print(N);
	else print(N - cnt + 1);
	return 0;
}
