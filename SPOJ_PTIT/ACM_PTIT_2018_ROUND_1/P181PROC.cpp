#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <unordered_map>
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



int main() {
	ll a,b;
	cin>>a>>b;
	unordered_map<ll,bool> map;
	b=min(b,1LL*10004); 
	bool ok = true;
	REP(i,1,b+1){
		int mod = a%i;
//		cout<<mod<<"-"<<map[mod]<<endl;
		if(map[mod]){
			ok = false;
			break;
		}else map[a%i]=true;
	}
	if(ok) cout<<"Yes";
	else cout<<"No";
	return 0;
}
