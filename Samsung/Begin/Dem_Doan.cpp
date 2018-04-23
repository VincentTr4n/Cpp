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
#define ull unsigned long long
#define ld long double
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl

using namespace std;
int i,j;


struct P{
	int x,y;
};

ll tmp[2008];
ll *vis=tmp+1004;


int main() {
	ll n,r,cnt=0,tmp=0;
	P arr[100006],a;
	REP(i,-1003,1005) vis[i]=12345;
	cin>>n>>r;
	cin>>a.x;
	cin>>a.y;
	rep(i,n){
		cin>>arr[i].x;
		cin>>arr[i].y;
	}
	rep(i,n){
		if((arr[i].x>=a.x-r && arr[i].x<=a.x+r) && (arr[i].y>=a.y-r && arr[i].y<=a.y+r)){
			if(vis[arr[i].x]!=arr[i].y){
				vis[arr[i].x]=arr[i].y;
				cnt++;
			}
		}
	}
	ll res = cnt*(cnt-1)/2;
	print(res);
	return 0;
}
