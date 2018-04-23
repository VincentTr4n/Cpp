#include<iostream>
int x[100],p[200],cc[200],d[200],*c = cc+100;
int count=0;
int n;

//Ve nha code chay tu 1

void TRY(int k)
{
	if(k==n)
	{
		count++; return;
	}
	for(int t=1;t<=n;t++)
	{
		if(d[t]==0 && c[t-(k+1)]==0 && p[t+k+1]==0)
		{
			x[k+1] = t;
			d[t] = c[t - (k+1)] = p[t+k+1] =1;
			TRY(k+1);
			d[t] = c[t - (k+1)] = p[t+k+1] =0;
			
		}
	}
}

int main()
{
	std::cin>>n;
	for(int i=0;i<=200;i++)
	{
		p[i] = cc[i] = d[i] = 0;
	}
	TRY(0);
		std::cout<<count;
}

