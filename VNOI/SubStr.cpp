#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
#include <vector>
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

vi res(1000006);

void quickSearch(string s,string p) {
	ll n = len(s),m=len(p);
	int shift[256];
	rep(i,256) shift[i]=m+1;
	rep(i,m) shift[p[i]]=m-i;

	ll pos = m-1;
	j=0;
	while(pos<n) {
		int index = 0;
		while(index<m && p[m-index-1]==s[pos-index]) index++;
		if(index>=m) res[j++]=pos-m+2;
		if(pos+1>=n) break;
		pos+=shift[s[pos+1]];
	}
}

int main() {
	string s,p;
	cin>>s>>p;
	quickSearch(s,p);
	if(res[0]==0) cout<<"0";
	else {
		i=0;
		while(res[i]!=0) {
			cout<<res[i]<<" ";
			i++;
		}
	}
	return 0;
}
