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
#define fi first
#define se second
#define all(a) a.begin(),a.end() 
#define add push_back
#define len(arr) arr.size()
#define lens(arr) arr.length()
#define print(x) cout<<x<<endl

using namespace std;
int i,j;


int main() {
	ll n,m,a[100006],cnt=0;
	cin>>n>>m;
	rep(i,n) cin>>a[i];
	sort(a,a+n);
	rep(i,n){
		if(2*a[i]<=m){
			 m-=a[i]*2;
			 cnt+=2;
		}
		else{
			if(a[i]<=m){
				m-=a[i];
				cnt++;
			}
			if(a[i]/2<=m){
				m-=a[i]/2;
				cnt++;
			}else break;		
		}	
	}
	print(cnt);
	return 0;
}
