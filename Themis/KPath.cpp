#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x) * (x))
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vll vector<ll>
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;

int i,j,t;

class kpath
{
	int n,m,k,A[100][100],x[100],dau[100];
	long res;
	public:
		void input();
		void TRY(int p);
		void slove();
};

void kpath::slove()
{
	input();
	REP(i,1,n+1)
	{
		REP(j,1,n+1) dau[j]=0;
		x[1]=i;
		dau[i]=1;
		TRY(1);
	}
	cout<<res;
}

void kpath::TRY(int p)
{
	if(p==k) {res+=x[1]<x[k];return;}
	REP(t,1,n+1);
	if(dau[t]==0 && A[x[p]][t]==1)
	{
		dau[t]=1;
		x[p+1]=t;
		TRY(p+1);
		dau[t]=0;
	}
}

void kpath::input()
{
	cin>>n>>k;
	k++;
	REP(i,1,n+1)
	REP(j,1,n+1) A[i][j]=0;
	cin>>m;
	rep(i,m)
	{
		int u,v;
		cin>>u>>v;
		A[u][v]=A[v][u]=1;
	}
	res=0;
}
int main() {
	kpath kp;
	kp.slove();
	return 0;
}
