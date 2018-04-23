#include<iostream>
//x1+x2+x3+...+xn = M
//Tim Nghiem xi thuoc Z+
void TRY(int *x,int k,int T,int n,int m)
{
	if(k==n){
		for(int i=1;i<=n;i++)
		std::cout<<x[i];
		std::cout<<"\n";
	}else{
		for(int t=0;t<= n-T;t++)
		{
			x[k+1] = t;
			TRY(x,k+1,T+t,n,m);
		}
	}
}

int main()
{
	int x[100];
	TRY(x,0,1,4,5);
	return 0;
}
