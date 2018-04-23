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
const ll inf = -11091997;

ll a[1000007],T[1000007],L[1000007];



int main() {
	ll n,tmp;
	cin>>n;
	rep(i,n){
		cin>>a[i];
		cin>>tmp;
		T[a[i]]=tmp;
	}
	sort(a,a+n);
		
	return 0;
}
