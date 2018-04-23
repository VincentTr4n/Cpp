#include <bits/stdc++.h>
#include <numeric>
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
	int n, k, x, sum=0;
	cin >> n >> k;
	rep(i, n){
		cin >> x;
		sum += x;
	}
	int res = 0;
	int tmp = round((float)sum/n);
	while(tmp<k){
		sum+=k;
		n++;
		tmp = round((float)sum/n);
		res++;
	}
	print(res);
	return 0;
}
