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


int solution(int n,int m){
	if(n==0) return 1;
	if(n<0 || n>0 && m==0) return 0;
	int res = 0;
	for(int i=m;i>=0;i--) res+=solution(n-pow(i,2),i-1);
	return res;
}


int main() {
	int t;
	cin>>t;
	while(t-- >0){
		int n,m;
		cin>>n;
		m = pow(n,0.5);
		print(solution(n,m));
	}
	return 0;
}
