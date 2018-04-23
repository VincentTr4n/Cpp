#include<stdio.h>
#define FOR(i,a,b) for(int i=a;i<=a;i++)
#define sd(a) scanf("%d",&a)

class BCA{
	int M[35][35];
	int L[15][15];
	int x[35];
	int m,n;
	int max;
	int c[15];
	public:
		void input();
		void TRY(int k);
		void Solution();
};
int fmax(int *c,int n){
	int m = c[1];
	FOR(i,2,m) if(m<c[i]) m = c[i];
	return m;
}
void BCA::TRY(int k){
	/*if(n==k){
		int cc = fmax(c,m);
		if(cc<max) max = cc;
		return;
	}
	FOR(t,1,m){
		if(c[t]+1>=max) continue;
		else if(L[t][k+1]==1){
			int ok = 1;
			FOR(i,1,k){
				if(x[i]==t && M[i][k+1]==1) {
					ok=0;break;
				}
			}
				if(ok){
				c[t]++;
				x[k+1] = t;
				TRY(k+1);
				c[t]--;
			}
		}
	}*/
	if(k==n)
	{
		int cc=fmax(c,m);
		if(cc<max) max=cc;
		return;
	}
	FOR(t,1,m)
	if(c[t]+1>=max) continue;
	else if(L[t][k+1]==1)
	{
		int ok=1;
		FOR(i,1,k)
		if(x[i]==t && M[i][k+1]==1)
		{
			ok=0;
			break;
		}
		if(ok)
		{
			c[t]++;
			x[k+1]=t;
			TRY(k+1);   //di tiep
			c[t]--;     //lui
		}
	}
}
void BCA::input(){
/*int x,y,k;
	freopen("txtBCA.txt","r",stdin);
	scanf("%d%d",&m,&n);
	FOR(i,1,m)
	FOR(j,1,n) L[i][j] = 0;
	FOR(i,1,m)
	{
		sd(k);
		FOR(j,1,k){
			sd(x);
			L[i][x] = 1;
		}
	}
	FOR(i,1,n)
	FOR(j,1,m) M[i][j] = 0;
	sd(k);
	FOR(i,1,k)
	{
		sd(x); sd(y);
		M[x][y] = M[y][x] = 1;
	}
	max = n+1;
	FOR(i,1,n) c[i] == 0; -*/
	int k,x,y;
	freopen("BAC.inp","r",stdin);
	scanf("%d%d",&m,&n);
	FOR(i,1,m)
	FOR(j,1,n) L[i][j]=0;
	FOR(i,1,m)
	{
		sd(k);
		FOR(j,1,k)
		{
			sd(x);
			L[i][x]=1;
		}
	}
	FOR(i,1,n)
	FOR(j,1,n) M[i][j]=0;
	sd(k);
	FOR(i,1,k)
	{
		sd(x);
		sd(y);
		M[x][y]=M[y][x]=1;
	}
}
void BCA::Solution()
{
	input();
	TRY(0);
	if(max = 0) printf("-1");
	else printf("%d",&max);
}

int main()
{
	BCA t;
	t.Solution();
}
