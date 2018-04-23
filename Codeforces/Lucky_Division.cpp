#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
#include <vector>
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(int i=b;i>=a;i--)
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

int x[10],tmp[2]={4,7};

vi a;
void GEN(int k,int n){
	if(k==n){
		int res=x[1],t=10;
		REP(j,2,n+1){
			res+=x[j]*t;
			t*=10;
		}
		a.add(res);	
		return;
	}else{
		rep(i,2){
			x[k+1]=tmp[i];
			GEN(k+1,n);
		}
	}
}

int main() {
	GEN(0,1);
	GEN(0,2);
	GEN(0,3);
	int n;
	cin>>n;
	rep(i,len(a)){
		if(n%a[i]==0){
			print("YES");
			return 0;
		}
	}
	print("NO");
	return 0;
}
