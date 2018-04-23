#include <iostream>
#include <iomanip>
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

struct P{
	double x;
	double y;
};

int main() {
	cout<<fixed;
	double t,res=1,d,dx,dy,dz;
	P a,b,c;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	cin>>c.x>>c.y;
	cin>>t;
	
	d = sqr(a.x)*b.x*1 + a.x*1*sqr(c.x) + sqr(b.x)*c.x*1 - 1*b.x*sqr(c.x) - a.x*sqr(b.x)*1 - sqr(a.x)*c.x*1;
	dx = a.y*b.x*1 + a.x*1*c.y + b.y*c.x*1 - 1*b.x*c.y - a.x*b.y*1 - 1*c.x*a.y;
	dy = sqr(a.x)*b.y*1 + a.y*1*sqr(c.x) + sqr(b.x)*c.y*1 - 1*b.y*sqr(c.x) - a.y*sqr(b.x)*1 - 1*c.y*sqr(a.x);
	dz = sqr(a.x)*b.x*c.y + a.x*b.y*sqr(c.x) + sqr(b.x)*c.x*a.y - a.y*b.x*sqr(c.x) - a.x*sqr(b.x)*c.y - b.y*c.x*sqr(a.x);
	
	res=sqr(t)*dx/d + t*dy/d + dz/d;
	
	cout<<setprecision(1)<<res;
	
	
	return 0;
}
