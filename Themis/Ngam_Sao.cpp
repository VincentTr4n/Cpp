#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
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
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;

struct start{
	int x;
	int y;
	int s;
};


int main() {
	int n,q,c,X[104]={},Y[104]={};
	start a[100006];
	cin>>n>>q>>c;
	rep(i,n){
		int x,y,s;
		cin>>x>>y>>s;
		a[i].x=x;
		a[i].y=y;
		a[i].s=c-s+1;
	}
	rep(i,q){
		int x1,y1,x2,y2;
		ll t;
		cin>>t>>x1>>y1>>x2>>y2;
		
	}
	cout<<s;
	return 0;
}
