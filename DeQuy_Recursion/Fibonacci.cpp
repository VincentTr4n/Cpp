#include<iostream>
long temp[100005]={};
long Fib(long n)
{
	if(temp[n]>0) return temp[n];
	if(n==0||n==1) return temp[n]=1;
	else temp[n]= Fib(n-1) + Fib(n-2);
	return temp[n];
}
int main()
{
	long n;
	std::cin>>n;
	std::cout<<Fib(n);
}
