#include<iostream>
int doiso(int a,int b,int c,int d)
{
	int t=0;
	t++;
	if(a==c && b==d) return d;
	else
	{
		d+=doiso(a+b,b,c,d);
		d+=doiso(b,a,c,d);
		if(a>b)
		d+=doiso(a-b,b,c,d);
	}
	
}
int main()
{
	int a,b,c,d;
	std::cin>>a>>b>>c>>d;
	if(doiso(a,b,c,d)>0) std::cout<<doiso(a,b,c,d);
	else std::cout<<"-1";
	return 0;
}
