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
	ll a[3],m,cnt=0;
	ford(i,3) cin>>a[i];
	cin>>m;
	m*=2;
	rep(i,3){
		if(m/(3-i)>a[i]){
			cnt+=a[i];
			m-=a[i]*(3-i);
		}else{
			cnt+=m/(3-i);
			m%=(3-i);
		}
	}
	if(m==0) print(cnt);
	else print("KHONG DOI DUOC");
	return 0;
}
