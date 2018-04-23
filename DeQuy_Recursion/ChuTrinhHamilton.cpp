#include<iostream>
#include<climits>
using namespace std;
//Chu trinh hamilton
//Xi and Xi+1 thuoc E
//Xi != Xj voi j!=i
//     freopen("name.text","r",stdin) thay r = w de write
#define FOR(i,a,b) for(int i = a;i<=b;i++)
class gr{
	public:
		int n, A[100][100],min=INT_MAX;
		int d[100],x[100];
		void nhap();
		void TRY(int k,int T);
		void xl(int s=1);
};
void gr::nhap()
{
	cin>>n;
	FOR(i,1,n)
	FOR(j,1,n) cin>>A[i][j];
}
void gr::TRY(int k,int T)
{
	if(k==n && A[x[k]][x[1]]) {
	//	FOR(i,1,k) cout<<x[i];
	//	cout<<x[1]<<endl;
	if(T+A[x[k]][x[1]]<min) min = T+A[x[k]][x[1]];
	}
	else{
		for(int t=1;t<=n;t++)
		{
			if(d[t]==0 && A[x[k]][t]){
				x[k+1] = t;
				d[t] =t;
				TRY(k+1,T+A[x[k]][t]);
				d[t] =0;
 			}
		}
	}
}
void gr::xl(int s)
{
	nhap();
	FOR(i,1,n) d[i] =0;d[s] = 1;
	x[s] = 1;
	TRY(1,0);
	cout<<min;
}

int main()
{
	gr G;
	G.xl(1);
}
