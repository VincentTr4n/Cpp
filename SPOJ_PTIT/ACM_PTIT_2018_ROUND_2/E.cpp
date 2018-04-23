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

int a[100006];


int main() {
	int n,tmp,cnt=0;
	cin>>n;
	map<int,int> mp;
	rep(i,n) cin>>a[i];
	rep(i,n){
		cin>>tmp;
		if(a[i]!=tmp){
			if(mp[a[i]]==0){
			mp[a[i]]=tmp;
			cnt++;
			}
			else if(mp[a[i]]!=tmp && mp[mp[a[i]]]!=tmp){
				cnt++;
			}
		}
	}
	print(cnt);
	return 0;
}
