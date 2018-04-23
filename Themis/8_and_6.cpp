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

ll num,n,x[105],pow10[105];
int tmp[2]={6,8};

int lenN(ll n){
	int cnt=0;
	pow10[0]=1;
	while(n!=0){
		cnt++;
		n/=10;
		pow10[cnt]=pow10[cnt-1]*10;
	}
	return cnt;
}

void TRY(int k,int n){
	if(k==n){
		REP(i,1,n) cout<<x[i];
		cout<<endl;
	}else{
		rep(i,2){
			x[k+1]=i;
			TRY(k+1,n);
		}
	}
}

int main() {
	cin>>num;
	n=lenN(num);
//	rep(i,n) cout<<pow10[i]<<" ";
	TRY(0,n+1);
	return 0;
}
