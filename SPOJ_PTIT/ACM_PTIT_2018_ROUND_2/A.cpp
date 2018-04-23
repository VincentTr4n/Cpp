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
	int c,v0,v1,a,L;
	cin>>c>>v0>>v1>>a>>L;
	int cnt = 1, index = 1;
	c-=v0;
	while(c>0){
		int tmp = v0 + (index++)*a;
		int tmp2 = min(tmp,v1);
		tmp2-=L;
		c-=tmp2;
		cnt++;
	}
	print(cnt);
	return 0;
}
