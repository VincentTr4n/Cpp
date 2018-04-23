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
int i,j,x[234],n,k1,k2;


void TRY(int t1,int t2,int t3){
	if(t1==n){
		if(t3<n && (t2==0 || t2>=k1)){
			REP(i,1,n+1) cout<<x[i];
			cout<<endl;
			return;
		}
	}
	else{
		if(t1==0 || (x[t1]!=0 && t2>=k1)){
			x[t1+1]=0;
			TRY(t1+1,0,t3);
		}
		if(t2<k2){
			x[t1+1]=1;
			TRY(t1+1,t2+1,t3+1);
		}
	}
}

int main() {
	cin>>n>>k1>>k2;
	x[n+1]=0;
	TRY(0,0,0);
	return 0;
}
