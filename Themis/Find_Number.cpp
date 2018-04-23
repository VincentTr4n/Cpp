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
#define print(x) cout<<(x)<<endl

using namespace std;
int i,j;
const ll inf = -11091997;

ll sum(ll n){
	ll res=0;
	while(n!=0){
		res+=n%10;
		n/=10;
	}
	return res;
}
ll getLen(ll n){
	ll cnt=0;
	while(n!=0){
		n/=10;
		cnt++;
	}
	return cnt;
}

int main() {
	ll num,tmp;
	cin>>num;
	bool ok = 0;	
	ll L=num-9*getLen(num);
	REP(i,L,num){
		if(i+sum(i)==num){
			cout<<i<<" ";
			ok=1;
		}
	}
	if(!ok) cout<<"-1";
	return 0;
}
