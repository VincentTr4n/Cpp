#include<iostream>
using namespace std;

void TRY(int *x,int k,int n)
{
	for(int t=0;t<=1;t++){
		x[k+1] = t;
				
	if(k==n) {
		for(int i=1;i<=k;i++)
		{
			cout<<x[i];
		}
			cout<<endl;	
		} else TRY(x,k+1,n);
	}
}
int main()
{
	int x[100];
	TRY(x,0,5);
}
