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


int main() {
	ll a,b;
	cin>>a>>b;
	if(a==b) cout<<"infinity";
	else if(a<b) cout<<"0";
	else {
			ll cnt=0;
			a-=b;
			for(i=1; i<=sqrt(a); i++) {
				if(a%i==0) {
					if((a+b)%i==b) cnt++;
					ll tmp = a/i;
					if((a+b)%tmp==b && tmp!=i) cnt++;
				}
			}
			cout<<cnt;
			cout<<endl;
	}
	return 0;
}
