#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
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

int a[104][104];

int main(){
	//freopen("nuamatran.txt","r",stdin);
	int n,all=0;
	cin>>n;
	rep(i,n) rep(j,n){
		cin>>a[i][j];
		all+=a[i][j];
	}
	int sum1=0,sum2=0;
	rep(i,n) sum1+=a[i][i];
	int j = 0;
	ford(i,n) sum2+=a[i][j++];
	
	int A=0,B=0;
	j=0;
	REP(i,1,n-1){
		rep(k,j+1) A+=a[i][k];
		j++;
	}
	print(all-sum1-A);
	print(A);
	
	j=n-1;
	rep(i,n-1){
		rep(k,j) B+=a[i][k];
		j--;
	}
	print(B);
	print(all-B-sum2);
	
	return 0;
}
