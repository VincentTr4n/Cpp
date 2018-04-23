#include<iostream>
long tach(long n,long m)
{
	if(n<=m) return 1;
	if((n+m)%2!=0) return 1;
	return tach((n+m)/2,m)+tach((n-m)/2,m);
	
}
int main()
{
	long n,m;
	std::cin>>n>>m;
	std::cout<<tach(n,m);
}
