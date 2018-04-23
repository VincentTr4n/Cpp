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
#define all(a) a.begin(),a.end() 
#define add push_back
#define len(arr) arr.size()
#define lens(arr) arr.length()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;


int main() {.
	ll x,y,L,R,res=0,sum;
	cin>>x>>y;
	L=min(x,y);
	R=max(x,y);
	sum=(L+R)*(R-L+1)/2;
	if(L%13) L=L/13+1;
	else L/=13;
	for(i=L;i*13<=R;i++){
		res+=i*13;
	}
	cout<<sum-res;
	
	return 0;
}
