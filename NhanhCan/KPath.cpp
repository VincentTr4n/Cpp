#include<iostream>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

class Kpath{
	int n,m,k,A[35][35],x[35],dx[35];
	long d;
	public:
		void input();
		void TRY(int p);
		void Solution();
};

void Kpath::input(){
	cin>>n>>k;
	FOR(i,1,n)
	FOR(j,1,n) A[i][j] = 0;
	cin>>m;
	FOR(e,1,m){
		int u,v;
		cin>>u>>v;
		A[u][v] = A[v][u] = 1;
	} 	
}

void Kpath::TRY(int p){
	if(p==k+1) {
		d++; return;
	}
	FOR(t,1,n){
		if(dx[t]==0 && A[x[p]][t]==1)
		{
			dx[t] = 1;
			x[p+1] = t;
			TRY(p+1);
			dx[t] = 0;
		}
	}
}

void Kpath::Solution(){
	d = 0;
	input();
	FOR(i,1,n){
		FOR(j,1,n){
			dx[i] = 0;
		}
		x[1] = i; 
		dx[i] = 1;
		TRY(1);
	}
	cout<<d/2;
}

int main()
{
	freopen("txtKPath.txt","r",stdin);
	Kpath c;
	c.Solution();	
}
