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
int i,j,k;
const ll inf = -11091997;
int M[1006][1006];
int M1[1006][1006];

int main() {
	int n,m,res1=0,res=0;
	cin>>n>>m;
	rep(i,n) rep(j,m){
		cin>>M[i][j];
		M1[i][j]=!M[i][j];	
	}
	rep(i,n) rep(j,m){
		if(i==0 || j==0) continue;
		if(M[i][j]>0) M[i][j]=min(min(M[i-1][j],M[i][j-1]),M[i-1][j-1])+1;
		if(M1[i][j]>0) M1[i][j]=min(min(M1[i-1][j],M1[i][j-1]),M1[i-1][j-1])+1;
		res=max(res,M[i][j]);
		res1=max(res1,M1[i][j]);
	}
	print(max(res,res1));
	return 0;
}
