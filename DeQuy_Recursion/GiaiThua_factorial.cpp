#include<iostream>
long gt(long n)
{
	if(n==0 || n==1) return 1;
	return gt(n-1)*n;
}
int main()
{
	long n;
	std::cin>>n;
	std::cout<<gt(n);
	return 0;
}
