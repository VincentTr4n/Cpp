#include<stdio.h>
long long C[105][20005],MOD=1e9+7,a[105];
 
long long sol(int n,long long M)
{
	if(C[n][M+10000]>=0) return C[n][M+10000];
	if(n==1)
	{
		if(M==a[1] || M==-a[1]) return C[n][M+10000]=1;
		else return C[n][M+10000]=0;
	}
	return C[n][M+10000]=(sol(n-1,M-a[n])+sol(n-1,M+a[n]))%MOD;
}
int main()
{
	int n,test;
	scanf("%d",&test);
	while(test--)
	{
		long long M,T=0;
		scanf("%d%lld",&n,&M);
		for(int i=1; i<=n; i++)
		{
			scanf("%lld",&a[i]);
			T+=a[i]>0?a[i]:-a[i];
		}
		if((T+M)%2 || T<M || -T>M) printf("0\n");
		else
		{
			for(int i=1; i<=n; i++)
				for(int j=-10000; j<=10000; j++) C[i][j+10000]=-1;
			printf("%lld\n",sol(n,M));
		}
	}
}
