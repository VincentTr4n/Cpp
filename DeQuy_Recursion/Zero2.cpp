#include<iostream>
long *f;
long zero2(long n)
{
	if(f[n]>0) return f[n];
	if(n==0) return f[n]=1;
	else{
		int d = 0;
		for(int i=1;i*i<=n;i++)
		{
			if(n%i==0)
			{
				d+=zero2((i-1)*(n/i+1));
			}
		}
		return f[n]=d;
	}	
}
int main()
{
	long n;
	std::cin>>n;
	f =  new long[n+5];
	for(int i=0;i<=n;i++)
	{
		f[i] = 0;
	}
	std::cout<<zero2(n);
}
