#include<iostream>
using namespace std;

long TongMax2(int i,int j,long *a)
	{
		if(i==j) return a[i];
		int k = (i+j)/2;
		long ml = TongMax2(i, k, a);
		long mr = TongMax2(k+1, j, a);
		long maxleft = a[k];
		long s = 0;
		for(int index=k;index>=i;index--)
		{
			s+=a[index];
			if(s>maxleft) maxleft = s;
		}
		long maxright = a[k+1];
		s=0;
		for(int index = k+1;index<=j;index++)
		{
			s+=a[index];
			if(s>maxright) maxright =s;
		}
		long MaxCenter = maxleft + maxright;
		return MaxCenter>ml && MaxCenter>mr?MaxCenter:(ml>mr?ml:mr);
	}
	long maxT(int n,long *a)
	{
		long max,c;
		max=c=a[0];
		for(int i=1;i<n;i++)
		{
			c=c>0?c+a[i]:a[i];
			max=max>c?max:c;
		}
		return max;
	}
	int main()
	{
		long *a;
		int n;
		cin>>n;
		a= new long[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<TongMax2(0,n-1,a);
	}
