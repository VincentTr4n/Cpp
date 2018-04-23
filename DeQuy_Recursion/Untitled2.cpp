#include<iostream>
using namespace std;

//x1 x2 x3 .... xn
// xi != xi+1
// (xi+xi+1)%3 != 0;
int d = 0;
void TRY(int *x,int k,int n)
{
	if(k==n)
	{
		for(int i=1;i<=k;i++)
		{
			cout<<x[i];
		}
		cout<<endl;
			d++;
	}else
	{
		for(int t=0;t<=2;t++)
		if(k==0 || (x[k]!= t && (x[k]+t)%3!=0))
		{
			x[k+1] = t;
			TRY(x,k+1,n);
		}
	}
	
}
int main()
{
	int n;
	cin>>n;
	int x[100];
	TRY(x,0,n);
	cout<<d;
	
}
