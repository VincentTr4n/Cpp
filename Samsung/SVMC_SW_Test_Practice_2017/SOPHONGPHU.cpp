#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,a,b) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;

ll getSum(ll n){
	ll sum = 0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			ll tmp = n/i;
			if(tmp != i && tmp != n) sum+=tmp;
		}
	}
	return sum;
}


int main(){
	ll n;
	cin>>n;
	print(n<getSum(n));
	return 0;
}
