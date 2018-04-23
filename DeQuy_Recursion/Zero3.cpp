#include<iostream>
bool zero3(long n,long m)
{
	if(n==m) return true;
	if(n<m) return false;
	for(int i=1;i*i<n;i++)
	{
		if(n%i==0){
			int k = (i-1)*(n/i+1);
			if(zero3(k,m)) return true;
		}
	}
	return false;
}
int main()
{
	long n,m;
	std::cin>>n>>m;
	if(zero3(n,m)) std::cout<<"YES";
	else std::cout<<"NO";
}
