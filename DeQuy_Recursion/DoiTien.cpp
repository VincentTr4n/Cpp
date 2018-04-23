#include<iostream>
using namespace std;

//a1 ,a2, a3, .... an
//tim x1*a1+x2*a2+....+xn*an;

int n,a[100],M,Min = 999999;
void TRY(int k,int T,int t)
{
	if(k==n-1){	
		if((M-T)%a[n]==0)
			if((t+(int)((M-T)/a[n]))<Min) min = t+(M-T)/a[n];
	}
	else{
		for(int y = (M-T)/a[n+1];y>=0;y--)
		{
			TRY(k+1,T+y*a[k+1],t+y)
		}
	}
}


int main()
{
	int a[] = {0,3,1,4};
	n=3;
	M=19;
	min = M+1;
	TRY(0,0,0);
	cout<<min;
}
