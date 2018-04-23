#include<iostream>
using namespace std;
int d = 0;
bool b[100];
void TRY(int *x,int k,int n)
{
	if(k==n)
	{
		for(int i=1;i<=k;i++)
		{
			cout<<x[i]<<" ";
		}
		cout<<endl;
			d++;
	}else
	{
		for(int t=1;t<=n;t++)
		if(b[t]==false && (k==0|| (x[k]+t)%4!=0))
		{
			x[k+1] = t;
			b[t] = true;
			TRY(x,k+1,n);
			b[t] = false;
		}
	}
	
}

int main()
{
	int n;
	cin>>n;
	int x[100];
	for(int i=1;i<=n;i++)
	b[i] = false;
	TRY(x,0,n);
	cout<<d;
}
