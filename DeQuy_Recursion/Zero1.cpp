#include<iostream>
long zero(long n)
{
	if(n==0) return 1;
	int d = 0;
	for(int i = 1;i*i <= n;i++)
	{
		if(n%i==0)
		{
			d += zero((i-1)*(n/i+1));
		}
	}
	return d;
}
int main()
{
	long n;
	std::cin>>n;
	std::cout<<zero(n);
}
