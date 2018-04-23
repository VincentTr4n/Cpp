#include<iostream>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

class C2D{
	bool M[35][35];
	int n;
	int h[35],w[35],H,W;
	bool dd[100];
	public:
		void input();
		bool TRY(int u,int v,int d);	
		bool kt(int u,int v,int i);
};
void C2D::input(){
	freopen("txtC2D.txt","r",stdin);
	scanf("%d%d%d",&H,&W,&n);
	FOR(i,1,n) scanf("%d%d",&h[i],&w[i]);
	FOR(i,1,H)
	FOR(j,1,W) M[i][j] = 0;
	FOR(i,1,n) dd[i] = false;
}
bool C2D::TRY(int u,int v,int d){
	if(d==n) return true;
	if(M[u][v]==0){
		FOR(i,1,n)
		if(dd[i])
		if(kt(u,v,i)){
			bool ok;
			FOR(k,u,u+h[i]-1)
			FOR(j,v,v+w[i]-1) M[k][j] = 1;
			if(v<W) ok = TRY(u,v+1,d+1);
			else ok = TRY(u+1,1,d+1);
			if(ok) return true;
			dd[i] = false;
			FOR(k,u,u+h[i]-1)
			FOR(j,v,v+w[i]-1) M[k][j] = 0;
		}
	}
	
}
bool C2D::kt(int u,int v,int r){
	if(W-v+1<w[r]) return false;
	if(H-u+1<h[r]) return false;
	FOR(k,u,u+h[r]-1)
	FOR(j,v,v+w[r]-1) if(M[k][j]) return false;
	return true; 
}

int main()
{
	C2D t;
	t.input();
	if(t.TRY(0,0,0)) printf("1");
	else printf("0");	
}
