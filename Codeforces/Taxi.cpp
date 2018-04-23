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


int main() {
	int n,tmp,a[5]={};
	cin>>n;
	rep(i,n){
		cin>>tmp;
		a[tmp]++;
	}
	ll res=0;
	res+=a[4];
	res+=a[3];
	res+=a[2]/2;
	if(a[1]>a[3]){
		a[1]-=a[3];
		if(a[2]%2){
			++res;
			if(a[1]>2){
				res+=(a[1]-2)/4;
				res+=(a[1]-2)%4>0;
			}
		}else{
			res+=a[1]/4;
			res+=a[1]%4>0;
		}
	}else{
		res+=a[2]%2;
	}
	print(res);
	return 0;
}
